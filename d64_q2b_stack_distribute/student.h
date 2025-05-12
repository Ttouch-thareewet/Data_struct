#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const { //13  3 5 4 4  // 13 5 3 3 3 2 2 //16 7
  //write your code here
  std::vector<std::vector<T>> v;
  int m,count=mSize;
  m = mSize/k;
  int res = mSize % k;
  int r =1;
  for(int i=0;i<k;i++){
    std::vector<T> tmp;
    if(res==0){
      r=0;
    }
    for(int j=0;j<m+r;j++){
      tmp.push_back(mData[--count]);
    }
    v.push_back(tmp);
    res--;
  }
      
      
  return v;
  
}
#endif
