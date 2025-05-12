#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"

template <typename T>
void CP::vector<T>::range_erase(std::vector<std::pair<iterator, iterator>> &ranges) {
  // Write code here
  std::vector<int> si(mSize); // shift idx
  for(auto a:ranges){
    int start = a.first- begin();
    int end = a.second - begin();
    si[start]+=1;
    si[end]-=1;
  }
  int count=0,c=0;
  for(int i = 0;i<mSize;i++){
    count +=si[i];
    if(count==0){
      mData[c++] = mData[i];
    }
  }
  mSize = c;
}

#endif
