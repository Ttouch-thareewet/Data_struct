#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"
template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT,MappedT,CompareT>::my_recur(node* n,int level,int tmp) {
    //you MAY need to use this function
   
     if(n==NULL){
        return ;
     }
     mSize++;
     if(tmp == level){ //level =5 
        delete_all_nodes(n->right);
        delete_all_nodes(n->left);
        n->right =NULL;
        n->left  =NULL;
        return ;
     }
     if(n->left==NULL&&n->right!=NULL){
        my_recur(n->right,level,tmp+1);
        return;
     }
     if(n->right==NULL&&n->left!=NULL){
        my_recur(n->left,level,tmp+1);
        return;
     }

    my_recur(n->right,level,tmp+1);
    my_recur(n->left,level,tmp+1);
    return ;
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT,MappedT,CompareT>::trim(int depth) {
	/*write your code here
    If you cry on seeing the question, it is an insult. 
    If your teacher cries upon seeing your answer submission, 
    it is your achievement.

    Good luck with final and see you in Algorithm Design.
    */
   if(depth==-1){
        delete_all_nodes(mRoot);
        mRoot = NULL;
        mSize=0;
        return ;
   }
   mSize=0;
   return my_recur(mRoot,depth,0);
}

#endif
