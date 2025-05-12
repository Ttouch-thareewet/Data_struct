#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>
#include <vector>
#include <algorithm>

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    int k=4;
    T tmp = mData[idx];
    while(idx!=0){
        if(mLess(tmp,mData[(idx-1)/k])) break;
        mData[idx] = mData[(idx-1)/k] ;
        idx = (idx-1)/k;
    }
    mData[idx] = tmp;
} 

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    int k =4;
    T tmp = mData[idx];
    int c=0;
    while((c = idx*k+1)<mSize){
        //if(c+1<mSize && mLess(mData[c],mData[c+1])) c++; // c c+1 c+2 c+3
        // if(c+1==mSize){ // only 1
            
        // }else if(c+2==mSize){ // only 2
        //     if(mLess(mData[c],mData[c+1])) c++;
        // }else if(c+3==mSize){ // only 3
        //     if(mLess(mData[c],mData[c+2])&&mLess(mData[c+1],mData[c+2])){
        //         c+=2;
        //     }else if(mLess(mData[c],mData[c+1]) &&mLess(mData[c+2],mData[c+1]) ){
        //         c+=1;
        //     }
        // }else{ // 4 number 
        //     if(mLess(mData[c],mData[c+3])&&mLess(mData[c+1],mData[c+3])&&mLess(mData[c+2],mData[c+3])){
        //         c+=3;
        //     }else if(mLess(mData[c],mData[c+2])&&mLess(mData[c+1],mData[c+2])&&mLess(mData[c+3],mData[c+2])){
        //         c+=2;
        //     }else if(mLess(mData[c],mData[c+1])&&mLess(mData[c+2],mData[c+1])&&mLess(mData[c+3],mData[c+1])){
        //         c+=1;
        //     }
        // }
        int next = c;
        if(c+1<mSize && mLess(mData[next],mData[c+1])) next = c+1;
        if(c+2<mSize && mLess(mData[next],mData[c+2])) next = c+2;
        if(c+3<mSize && mLess(mData[next],mData[c+3])) next = c+3;
        c = next;
        if(mLess(mData[c],tmp)) break;
        mData[idx] = mData[c];
        idx = c;

    }
    mData[idx] = tmp;
}

#endif

