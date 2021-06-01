// heap.cpp
// Shin-Yi (Jessica) Ho

#include "heap.h"
#include <iostream>
using std::cout;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){
  if (vdata.size()==0){
    vdata.push_back(value);
  }else{
    for(int i=0; i<vdata.size();i++){
      if (value<=vdata[i]){
        vdata.insert(vdata.begin()+i,value);
        break;
      }else if (i==vdata.size()-1){
        vdata.push_back(value);
        break;
      }
    }
  }
}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){
  if (vdata.size()!=0){vdata.erase(vdata.begin());}
}

// Returns the minimum element in the heap
int Heap::top(){
  if (vdata.size()==0){return -1;}
  return vdata[0];
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){
  if (vdata.size()==0)return true;
  return false;
}

int Heap::size(){
  return vdata.size();
}
    