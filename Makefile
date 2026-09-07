CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17

.PHONY: all clean run

all: clash

clash: main.cpp plateau.cpp plateau.h
	$(CXX) $(CXXFLAGS) -o $@ main.cpp plateau.cpp

run: clash
	./clash

clean:
	rm -f clash *.o
