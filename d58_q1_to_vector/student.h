#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  //write your code only here
  //
  if(k>mSize){
    k=mSize;
  }
  for(int i=0;i<k;i++){
    res.push_back(mData[(mFront+i)%mCap]);
  }
  
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  int cap = to -  from ;
  mData = new T[cap]();
  mCap = cap ;
  mSize = cap ;
  mFront = 0 ;
  auto it = from ;
  for(int i=0;i<cap;i++){
    mData[i] = *it;
    it++;
  }
}

#endif
