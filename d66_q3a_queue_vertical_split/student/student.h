#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::v_split(std::vector<std::queue<T>> &output, size_t k) const
{
  // your code here
  int n = mSize / k;
  int s = mSize % k;
  int c = 0;
  for(int i=0;i<k;i++){
    std::queue<T> tmp;
    if(s>0){
      for(int j=0;j<n+1;j++){
        tmp.push(mData[(mFront+c)%mCap]);
        c++;
      }
      output.push_back(tmp);
      s--;
    }else{
      for(int j=0;j<n;j++){
        tmp.push(mData[(mFront+c)%mCap]);
        c++;
      }
      output.push_back(tmp);
    }
  }
}

#endif
