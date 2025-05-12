#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
  int i=0;
  std::vector<int> v;
  while(i<pos.size()){
    if(pos[i]<=mSize-1){
      
      v.push_back(pos[i]);
    }
    i++;
  }
  if(v.size()==1){ //return 
    return mData[(mFront+v[0])%mCap];
  }
  T min=mData[(mFront+v[0])%mCap];
  for(int i=1;i<v.size();i++){
     if(comp(mData[(mFront+v[i])%mCap],min)){
      min = mData[(mFront+v[i])%mCap];
     }
  }
  
  
  //should return something
  return min;
}

#endif
