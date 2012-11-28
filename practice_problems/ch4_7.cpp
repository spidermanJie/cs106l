#include <iostream>
#include <deque>
using namespace std;

void CursorClockwise(deque<int> &ring_buffer)
{
    // Remove the last element and push it to the front
    int last = ring_buffer.back();
    ring_buffer.pop_back();
    ring_buffer.push_front(last);
}

void CursorCounterClockwise(deque<int> &ring_buffer)
{
    // Remove the first element and push it on to the back
    int first = ring_buffer.front();
    ring_buffer.pop_front();
    ring_buffer.push_back(first);
}

int CursorRead(const deque<int> &ring_buffer)
{
    return ring_buffer.front();
}

void CursorWrite(deque<int> &ring_buffer, int val)
{
    ring_buffer[0] = val;
}

void PrintRingBuffer(const deque<int> &ring_buffer)
{
    for (size_t i = 0; i < ring_buffer.size(); ++i) {
        cout << ring_buffer[i] << ",";
    }
    
    cout << endl;
}

int main()
{
    deque<int> ring_buffer;
    
    ring_buffer.push_back(5);
    ring_buffer.push_back(7);
    ring_buffer.push_back(13);
    ring_buffer.push_back(-12);
    ring_buffer.push_back(8);
    
    PrintRingBuffer(ring_buffer);
    
    CursorClockwise(ring_buffer);
    CursorClockwise(ring_buffer);
    
    PrintRingBuffer(ring_buffer);
    
    CursorCounterClockwise(ring_buffer);
    
    PrintRingBuffer(ring_buffer);
    
    cout << "Value at cursor loc: " << CursorRead(ring_buffer) << endl;
    
    CursorWrite(ring_buffer, 50);
    
    PrintRingBuffer(ring_buffer);

    return 0;
}
