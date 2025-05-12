#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  if(K>mSize){
    K = mSize;
  }
  while(K--){
    pop();
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  if(K>mSize){
    K=mSize;
    
  }
  
  std::stack<T> tmp;
  std::stack<T> ans;
  while(K--){
    tmp.push(top());
    pop();
  }
  while(!tmp.empty()){
    ans.push(tmp.top());
    tmp.pop();
  }
  return ans;
}

#endif
