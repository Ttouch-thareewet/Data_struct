#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)// 01234
{
    
    int start = mSize - b-1;//2
    int stop = mSize - a-1;//3
    int add = stop-start+1;
    if(mCap<mSize+add){
        expand(std::max(mCap*2,mSize+add)); // 01234567
    }
    
    
    for(int i=mSize-1;i>stop;i--){
        mData[i+add] = mData[i];

    }
    int count = stop+add;
    for(int i=stop;i>=start;i--){
        mData[count--] = mData[i];
        mData[count--] = mData[i];
    }

    mSize = mSize+add;
    
}

#endif