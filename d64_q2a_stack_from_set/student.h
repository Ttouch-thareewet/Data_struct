#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  int cap = 1;
  mData = new T[cap]();
  mCap = cap;
  mSize = 0;
  auto it=last;
  if(first==last){
    return;
  }
  it--;
  //int count = 0;
  while(it != first){
    push(*(it));
    //std::cout <<*(it)<<"inloop";
    //count++;
    it--;
  }
  
  push(*(it));
  //std::cout <<*(it);
  // count++;
  //std::cout <<"mSize form student"<<mSize; 
}

#endif
