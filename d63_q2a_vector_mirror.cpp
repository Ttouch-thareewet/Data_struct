#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  int n = mSize; //1 2 3 4 -//begin + i+n
  for(int i=0;i<n;i++){
       ensureCapacity(n+i+1);
        *(begin()+i+n) = *(begin()+n-(i+1));
       mSize++;
  }
}

#endif
