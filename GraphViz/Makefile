CC=g++
LDLIBS=-lfreeglut -lopengl32 -lglu32 -lpthread
#LDFLAGS=-Wl,--subsystem,windows

# Builds the main program with the necessary libraries.
graphviz: GraphVisualizer.o main.o
	$(CC) $(LDFLAGS) GraphVisualizer.o main.o -o graphviz $(LDLIBS)

# Build object files from sources.
%.o: %.cpp
	$(CC) $^ -c -o $@

# Cleans the project by nuking emacs temporary files (*~), object files (*.o),
# and the resulting executable.
clean:
	rm -rf *~ *.o *.exe graphviz