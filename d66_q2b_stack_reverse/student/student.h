#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::reverse(size_t first, size_t last){
	// write your code here
	// int f = (int) first ;
	// int l = (int) last ;
	if(f>=l){
		return ;
	}
	if(l >= mSize){
		l = mSize-1;
	}
	for(int i=0;i<(l-f+1)/2;i++){
		T swap = mData[mSize-1-f-i]; //back 
		mData[mSize-1-f-i] = mData[mSize-1-l+i];
		mData[mSize-1-l+i] = swap;
	}
}

#endif
