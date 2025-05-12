
#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "map_bst.h"


template <typename KeyT,
          typename MappedT,
          typename CompareT>
typename CP::map_bst<KeyT,MappedT,CompareT>::iterator CP::map_bst<KeyT,MappedT,CompareT>::recursive(node* n,CP::map_bst<KeyT,MappedT,CompareT>::iterator p, CP::map_bst<KeyT,MappedT,CompareT>::iterator q) const
{
    // You may need this function
    // if(p==mRoot || q==mRoot) return mRoot;
    // if(*p->first==*q->first) return p;
    
}


template <typename KeyT,
          typename MappedT,
          typename CompareT>
typename CP::map_bst<KeyT,MappedT,CompareT>::iterator CP::map_bst<KeyT,MappedT,CompareT>::lca(CP::map_bst<KeyT,MappedT,CompareT>::iterator p, CP::map_bst<KeyT,MappedT,CompareT>::iterator q) const
{
    if(p==mRoot || q==mRoot) return mRoot;
    node * ptr = mRoot;
    while(ptr!=NULL){
        if(mLess((*q).first,ptr->data.first)&& mLess((*p).first,ptr->data.first)){
            ptr = ptr->left;
        }else if(mLess(ptr->data.first,(*q).first)&& mLess(ptr->data.first,(*p).first)){
            ptr = ptr->right;
        }else{
            return iterator(ptr);
        }
    }
    // Write your code here
}

#endif
