#ifndef __STUDENT_H_
#define __STUDENT_H_

//can include anything
#include <vector>
#include <algorithm>
//using namespace std;
template <typename T>
template <typename CompareT>
void CP::vector<T>::partial_sort(std::vector<iterator> &pos,CompareT  comp) {
  // Write code here
  // you can compare two data A and B of type T by calling comp(A,B)
  // which return true when A is less than B
  std::vector<int> idx;
  std::vector<T> sv;
  for(int i=0;i<pos.size();i++){
    idx.push_back(pos[i]-begin());
    sv.push_back(*(pos[i]));
  }
  std::sort(idx.begin(),idx.end());
  std::sort(sv.begin(),sv.end(),comp);
  for(int i=0;i<idx.size();i++){
    mData[idx[i]] = sv[i];
  }
}

#endif
