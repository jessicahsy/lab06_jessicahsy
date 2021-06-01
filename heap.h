// heap.h
// Shin-Yi (Jessica) Ho

#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <vector>

class Heap{

 public:
    void push(int value);     // insert value; //duplicates are allowed
    void pop(); // delete the min element 
    int top();
    bool empty();
    int size();
    
 private:
    std::vector<int> vdata; //store the binary heap tree as a dynamic array
};

#endif