#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
  if(it==end()) return result;
  iterator last = it.ptr->prev; // last for this
  // result 
  //เชื่อมตัวlast
  end().ptr->prev->next = result.end().ptr;
  result.end().ptr->prev = end().ptr->prev;
  //เชื่อมตัวfront
  it.ptr->prev = result.end().ptr;
  result.end().ptr->next = it.ptr;

  //this
  //lastตัวthis
  last.ptr->next = end().ptr;
  end().ptr->prev = last.ptr;

  result.mSize = mSize - pos;
  mSize = pos;
  
  return result;
}

#endif
