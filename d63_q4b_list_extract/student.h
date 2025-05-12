#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  if(a==b || empty()){
    return ;
  }
  iterator it = a;
  while(it!=b){
    // std::cout <<"inloop";
    iterator tmp = it++;
    --it;
    // iterator tmp = it.ptr->next;
    if(*it==value){
      it.ptr->prev->next = it.ptr->next;
      it.ptr->next->prev = it.ptr->prev;
      mSize--;
      // connecet with last of output
      iterator f = output.end();
      --f;
      it.ptr->prev = f.ptr->prev;
      it.ptr->next = f.ptr;
      f.ptr->prev->next = it.ptr;
      f.ptr->prev = it.ptr;
      output.mSize++;
    }
    it = tmp;
  }
}

#endif
