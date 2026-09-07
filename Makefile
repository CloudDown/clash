CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17

.PHONY: all clean run test

all: clash

clash: main.cpp plateau.cpp plateau.h
	$(CXX) $(CXXFLAGS) -o $@ main.cpp plateau.cpp

run: clash
	./clash

test_plateau: test_plateau.cpp plateau.cpp plateau.h
	$(CXX) $(CXXFLAGS) -o $@ test_plateau.cpp plateau.cpp

test: test_plateau
	./test_plateau

clean:
	rm -f clash test_plateau *.o
