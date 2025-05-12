#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  
  if(m>s2.mSize){
    m=s2.mSize;
  }
  if(k==0){
    for(int i=m-1;i>=0;i--){
      push(s2.mData[s2.mSize-1-i]) ;
    }
    s2.mSize -= m;
    
    return ;
  }
  T * tmp = new T[mSize+m];
  int count=0;
  for(int i=0;i<mSize;i++){
    if(i==mSize-k){
        for(int j=m-1;j>=0;j--){
          tmp[count++]=s2.mData[s2.mSize-1-j] ;
    }
    }
    tmp[count++] = mData[i];
    
  }
  delete [] mData;
    mData = tmp;
    mSize = count;
    s2.mSize -= m;
}
#endif
