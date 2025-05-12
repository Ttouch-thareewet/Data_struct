#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  if(mSize==0&&other.size()>=1){
    return true;
  }
  if(mSize>=1&&other.size()>=1&&mData[0]<other[0]){
      return true;
  }
  int n = std::min(mSize,other.size());
  int asize = mSize,idx=0, bsize = other.size();
  for(int i=0;i<n;i++){
    if(asize==0&&bsize>=1){
    return true;
  }
    if(asize>=1&&bsize>=1&&mData[idx]<other[idx]){
      return true;
  }
    if(asize>=1&&bsize>=1&&mData[idx]==other[idx]){
      idx++;
      asize--;
      bsize--;
    }
  }
  if(asize==0&&bsize>=1){
    return true;
  }
  // if(asize>=1&&bsize>=1&&mData[idx]<other[idx]){
  //     return true;
  // }
  return false;
}

#endif
