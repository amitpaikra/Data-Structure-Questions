//Question --> https://practice.geeksforgeeks.org/problems/level-order-traversal/1
/*
Given a binary tree, find its level order traversal.
Level order traversal of a tree is breadth-first traversal for the tree.
*/

vector<int> levelOrder(Node* node)
{
  //Your code here
  vector<int> ans ;
  if( node == NULL ) return ans ;
  
  queue<Node*> s ;
  s.push(node) ;
  
  while( !s.empty() ){
      Node *temp = s.front() ;
      s.pop() ;
      ans.push_back(temp->data) ;
      if( temp->left != NULL ){ s.push(temp->left) ;}
      if( temp->right != NULL ){ s.push(temp->right) ;}
      
  }
  
  return ans ;
}
