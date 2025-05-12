#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) { // 0 1 2 3 4 5 //1
  //write your code here
    
    ensureCapacity(mSize+1);
    
    for(int i=mSize;i>=0;i--){ // 0 1 2 3 4 5 // 0 1 2 3 4 6 5
        // mData[i] = mData[i-1];
        if(i ==mSize-pos){
          mData[i] =value;
          mSize+=1;
          return;
        }
        
        mData[i] = mData[i-1];
    }
    
}
#endif
