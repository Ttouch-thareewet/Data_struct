#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  //your code here
  //should return something
  std::vector<std::vector<T>> ans(k);
  if(k>mSize) {
    int idx = mSize-1;
    int count=0;
    while(idx>=0){
      
      ans[count++].push_back(mData[idx--]);
      
    }
    return ans;
  }
  
  int i=1,startindex=(mSize-1)%k;
    while(i<=mSize){
      
      ans[startindex--].push_back(mData[(i++)-1]);
      
      if(startindex<0){
        startindex = k-1;
      }
    }
  return ans;
  
}

#endif


// #ifndef __STACK_STUDENT_H__
// #define __STACK_STUDENT_H__
// #include "stack.h"
// #include <algorithm>

// template <typename T>
// std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
//   //your code here
//   //should return something
//   std::vector<std::vector<T>> v(k);
//   for(int i =mSize-1; i>=0; i--){
//     (v[i%k]).push_back(mData[mSize-1-i]); // 0 1 2 3 4 5 6
//   }
//   return v;
// }

// #endif


