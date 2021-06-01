#Makefile
CXX_FLAG = --std=c++11 -g

all: examheap

examheap: examheap.o heap.o
	g++ $(CXX_FLAG) -o examheap examheap.o heap.o

heap.o: heap.cpp
	g++ -c $(CXX_FLAG) heap.cpp

examheap.o: examheap.cpp
	g++ -c $(CXX_FLAG) examheap.cpp

clean:
	rm -f examheap *.o
	