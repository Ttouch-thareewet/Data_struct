#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  //write your code here
  // std::cout<<"In countsize"<<std::endl;
  if(n==NULL) return 0;

  return 1+process(n->right)+process(n->left);
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  
  if(mRoot==NULL) return std::pair<KeyT,MappedT>();
  delete_all_nodes(left.mRoot);
  delete_all_nodes(right.mRoot);
  if(mRoot->left!=NULL){
    left.mSize = process(mRoot->left);
    left.mRoot = mRoot->left;
    left.mRoot->parent = NULL;
  }
  if(mRoot->right!=NULL){
    right.mSize = process(mRoot->right);
    right.mRoot = mRoot->right;
    right.mRoot->parent = NULL;
  }
  
  mRoot->left = NULL;
  mRoot->right = NULL;
  mSize = 1;
  return mRoot->data;
}

#endif

