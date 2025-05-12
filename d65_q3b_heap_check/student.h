#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  // Your code here
    for(int i=0;i<mSize;i++){
      if((i*2)+1<mSize){
        if(!mLess(mData[(i*2)+1],mData[i])){ // false when parent <= child  mLess
          return false;
        }
      }else{
        return true;
      }
      if((i*2)+2<mSize){
        if(!mLess(mData[(i*2)+2],mData[i])){
          return false;
        }
      }else{
        return true;
      }

      
    }
  // Return something
  return true;
}

#endif