#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
  //your code here  
  node* lhs = mHeader;
  node* rhs = begin().ptr;
  for (int i = 0; i < mSize; i++)
  {
    if (lhs == NULL || rhs == NULL || lhs->next != rhs || rhs->prev != lhs) return false;
    lhs = rhs;
    rhs = lhs->next;
  }
  if (lhs->next != mHeader || mHeader->prev != lhs) return false;
  return true;
}


#endif

