#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  int i=0;
  int checkidx =0;
  int n=mSize;
  int count=0;
  while(i<n){
    if(checkidx<pos.size()&&i==pos[checkidx]){
      i++;
      count++;
      checkidx++;
      continue;
    }
    mData[i-count]=mData[i]; // 0 1 2 3 4 5 6 7 8 9  3 5 
    i++;
  }
  mSize -=pos.size();
}

#endif
