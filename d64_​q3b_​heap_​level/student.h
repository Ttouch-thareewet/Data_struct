#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;
  size_t t = 1;
  // h1 1 h2 3 4 5 6 h3 7 8 9 10 11 12 13 14 h4 15
  CP::priority_queue<T> pq;
  for(size_t i=0;i<(k);i++){
      t*=2;
  }
  if(t-1>=mSize) return r;
  for(size_t i =t-1 ;i <(t*2)-1  ;i++){
    if(mSize ==i){
      break;
    }
    // pq.push(mData[i]);
    r.push_back(mData[i]);
  }
  sort(r.begin(),r.end(),mLess);
  reverse(r.begin(),r.end());
  return r;
}

#endif

