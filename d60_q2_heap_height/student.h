#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  if(mSize ==0){
    return -1;
  } // 1 2 3 4 5 6 7 8
    // 0 1 1 2 2 2 2 3
    
    int num=2;
    int count=0;
    while(true){
      if(mSize<num){
        return count;
      }
      num*=2;
      count++;
    }
    
}

#endif

