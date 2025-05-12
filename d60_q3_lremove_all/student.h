#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  auto it = begin();
  node *ptr;
  while(it!=end()){
    if(*it == value){
      ptr = it.ptr;
      it++;
      ptr->next->prev = ptr->prev;
      ptr->prev->next = ptr->next;
      delete ptr;
      mSize--;
    }
    else{
      it++;
    }
  }
}

#endif