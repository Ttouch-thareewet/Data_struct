#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  if(k==0){
    return ;
  }
  //0, 1, 2, 3, 4, 5, 
  //0, 1, 4  2  1  5
  //{0,1,4,2,3,5}
  int interval = last-mData -k;//3
  int sindex = first -mData;//2
  int eindex = last-mData-1;//4
  T a[k];
  int count =0;
  for(int i=sindex;i<=sindex+k;i++){
    if(count<k){
      a[count++] = mData[i];
    }
    if(count==k){
      break;
    }
  }
  for(int i=sindex;i<interval;i++){
    mData[i] = mData[i+k];
  }
  count =0;
  for(int i =0;i<k;i++){
    mData[interval+i] = a[count++];
  }
}

#endif
