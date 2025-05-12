#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  if(k==1){
    return mData[0];
  }
  if(k==2){
    if(mLess(mData[1],mData[2])){
      return mData[2];
    }
    return mData[1];
  }
  if(k==3){
        CP::priority_queue<T,Comp> pq(mLess);
        for(int i=0;i<=7;i++){
          pq.push(mData[i]);
        }
        pq.pop();
        pq.pop();
        return pq.top();
    
  }
}

#endif
