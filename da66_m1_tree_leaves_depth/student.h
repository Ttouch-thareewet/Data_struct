#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

template <typename KeyT, typename MappedT, typename CompareT>
long long CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node* n, size_t aux) {
  // you may use this function
  if(n==NULL) return 0;
  if(n->right==NULL&&n->left==NULL) return aux;

  return my_recur(n->left,aux+1)+my_recur(n->right,aux+1);
}

template <typename KeyT, typename MappedT, typename CompareT>
long long CP::map_bst<KeyT, MappedT, CompareT>::sum_leaves_depth() {
  // write your code here
  return my_recur(mRoot,0);
}

#endif
