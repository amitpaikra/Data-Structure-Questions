//Question --> https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1
/*
Given a Binary Tree, find diameter of it.
The diameter of a tree is the number of nodes on the longest path between two leaves in the tree. The diagram below shows two trees each with diameter nine, the leaves that form the ends of a longest path are shaded (note that there is more than one path in each tree of length nine, but no path longer than nine nodes).
*/

int height( Node* root){
    if( root == NULL ) return 0  ;
    return max( height(root->left) , height(root->right)) +1 ;
}
int diameter(Node* root) {
    // Your code here
    if( root == NULL ) return 0 ;
    int _root =0   , _left = 0 , _right = 0  ;
     _root = height( root->left ) + height( root->right) +1 ;
    
  //  if( root->left != NULL)
     _left = diameter( root->left );
    
    //if( root->right != NULL )
    _right  = diameter( root->right ) ;
    
    return max( _root , max(_left ,  _right)  );
}

