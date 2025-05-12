#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
  //write your code here
  if(mSize==0){
    return ;
  }
  if(mCap == mSize){
    mFront = (mFront+mCap-1)%mCap;
    return ;
  }else{
    mData[(mFront+mCap-1)%mCap] = mData[(mFront+mSize-1)%mCap];
    mFront =(mFront+mCap-1)%mCap;
  }

    
}

#endif
