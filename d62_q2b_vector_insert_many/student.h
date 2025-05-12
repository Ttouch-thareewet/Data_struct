#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  sort(data.begin(),data.end()); // 1 2 3 4 5 6   //6 11 5 10
  int idx = data.size()-1;
  expand(std::max(mCap*2,mSize+data.size()));
  for(int i=mSize-1;i>=0;i--){
    if(idx==-1){
      break;
    }
    if(data[idx].first==mSize){
      mData[mSize+data.size()-1] = data[idx].second;
      mData[mSize+data.size()-2] = mData[i];
      idx--;
        if(i==data[idx].first){
          mData[i+idx+1] = mData[i];
          mData[i+idx] = data[idx].second;
          idx--;
          continue;
      }
    }
    
    if(i==data[idx].first){
      mData[i+idx+1] = mData[i];
      mData[i+idx] = data[idx].second;
      idx--;
      continue;
    }
    mData[i+idx+1] = mData[i];
    
   
  }
  mSize +=data.size();
  
}

#endif
