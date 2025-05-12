#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"

template <typename T>
void CP::queue<T>::reverse() {
  // Your code here
  // for(int i=0;i<mSize/2;i++){
  //   T tmp = mData[(mFront+i)%mCap];
  //   mData[(mFront+i)%mCap] = mData[(mFront + mSize - 1-i+mCap) % mCap];
  //   mData[(mFront + mSize - 1-i+mCap) % mCap]= tmp ;
  // }
  if(aux==0){
    aux=1;
  }else{
    aux = 0;
  }
  
}

template <typename T>
const T& CP::queue<T>::front() const {
  // You MAY need to edit this function
  if(aux%2==1){
    return mData[(mFront + mSize - 1) % mCap];
  }else{
    return mData[mFront];
  }
  
}

template <typename T>
const T& CP::queue<T>::back() const {
  // You MAY need to edit this function
  if(aux%2==1){ //reverse
    return mData[mFront];
  }
  return mData[(mFront + mSize - 1) % mCap];
}

template <typename T>
void CP::queue<T>::push(const T& element) {
  // You MAY need to edit this function
  if(aux%2==1){ // reverse
    ensureCapacity(mSize + 1);
    mData[(mFront-1+mCap)%mCap] = element;
    mFront = (mFront-1+mCap)%mCap;
    mSize++;
  }else{
    ensureCapacity(mSize + 1);
    mData[(mFront + mSize) % mCap] = element;
    mSize++;
  }
  
}

template <typename T>
void CP::queue<T>::pop() {
  // You MAY need to edit this function
  if(aux%2==1){ //reverse
    mSize--;
  }else{
     mFront = (mFront + 1) % mCap;
    mSize--;
  }
 
}

#endif