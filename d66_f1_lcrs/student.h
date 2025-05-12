// You may include library here
int recur(node *n,int t){
  if(n==NULL) return t-1;
  if(n->left_child==NULL && n->right_sibling==NULL) return t;
  if(n->left_child==NULL) return recur(n->right_sibling,t);

  if(n->right_sibling==NULL) return recur(n->left_child,t+1);

  return std::max(recur(n->left_child,t+1),recur(n->right_sibling,t));
}
int depth(node *n)
{
  // Write Code Here
  
  return recur(n,0);
}
