#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t k) const {
  // Write code here
  int r = mSize % k;
  int n = mSize / k;
  int start = mSize ;
  for(int i=1;i<=k;i++){
      int size;
      std::stack<T> tmp ;
      if(r>0){
        size = n+1;
        r--;
      }else{
        size = n;
      } 
      int index = start -size;
      for(int j =size;j>0;j--){
        tmp.push(mData[index++]);
      }
      output.push_back(tmp);
      start -= size;

  }
}

#endif
