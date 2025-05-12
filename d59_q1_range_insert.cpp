#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  auto it =last-1;
  while (it!= first-1){
    insert(position,*it);
    it--;
  }
}

#endif
