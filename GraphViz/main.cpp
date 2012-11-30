#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

#include "GraphVisualizer.h"
#include "SimpleGraph.h"
using namespace std;

const double PI = 3.14159265358979323;
const double F_REPEL_K = 0.001;
const double F_ATTR_K = 0.001;

void ReadGraph(const char *filename, SimpleGraph &graph)
{
    ifstream in(filename);
    if (!in.is_open()) {
        cerr << "Could not open graph file " << filename << endl;
        exit(1);
    }
    
    int numNodes;
    in >> numNodes;
    graph.nodes.resize(numNodes);
    
    int aEdgeIndx, bEdgeIndx;
    while (in >> aEdgeIndx >> bEdgeIndx) {
        Edge e = {.start = aEdgeIndx, .end = bEdgeIndx};
        graph.edges.push_back(e);
    }
    
    in.close();
}

void InitNodes(SimpleGraph &graph)
{
    int numNodes = graph.nodes.size();
    for (int k = 0; k < numNodes; ++k) {
        graph.nodes[k].x = cos(2*PI*k / numNodes);
        graph.nodes[k].y = sin(2*PI*k / numNodes);
    }
}

void UpdateGraph(SimpleGraph &graph)
{
    int numNodes = graph.nodes.size();
    vector<double> dx(numNodes, 0), dy(numNodes, 0);
    
    // Calculate the repulsive force between the nodes
    Node a, b;
    double fRepel, theta;
    for (int i = 0; i < numNodes - 1; ++i) {
        a = graph.nodes[i];
        for (int j = i + 1; j < numNodes; ++j) {
            b = graph.nodes[j];
            
            fRepel = F_REPEL_K / sqrt(pow(b.y - a.y, 2) + pow(b.x - a.x, 2));
            theta = atan2(b.y - a.y, b.x - a.x);
            
            dx[i] -= fRepel * cos(theta);
            dy[i] -= fRepel * sin(theta);
            
            dx[j] += fRepel * cos(theta);
            dy[j] += fRepel * sin(theta);
        }
    }
    
    // Calculate the attractive force between the nodes
    int numEdges = graph.edges.size();
    double fAttract;
    for (int i = 0; i < numEdges; ++i) {
        a = graph.nodes[graph.edges[i].start];
        b = graph.nodes[graph.edges[i].end];
        
        fAttract = F_ATTR_K * (pow(b.y - a.y, 2) + pow(b.x - a.x, 2));
        theta = atan2(b.y - a.y, b.x - a.x);
        
        dx[graph.edges[i].start] += fAttract * cos(theta);
        dy[graph.edges[i].start] += fAttract * sin(theta);
        
        dx[graph.edges[i].end] -= fAttract * cos(theta);
        dy[graph.edges[i].end] -= fAttract * sin(theta);
    }
    
    // Apply the forces to update the positions of the nodes
    for (int i = 0; i < numNodes; ++i) {
        graph.nodes[i].x += dx[i];
        graph.nodes[i].y += dy[i];
    }
}

int main()
{
    string filename;
    cout << "Enter graph filename: ";
    getline(cin, filename);
    
    int duration;
    cout << "Enter algorithm run time (seconds): ";
    cin >> duration;
    
    SimpleGraph graph;
    ReadGraph(filename.c_str(), graph);
    InitNodes(graph);
    
    time_t start = time(NULL);
    while (difftime(time(NULL), start) < duration) {
        UpdateGraph(graph);
        DrawGraph(graph);
    }
    
    return 0;
}
