//Question---> https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1#
/*
Given a binary tree, find if it is height balanced or not. 
A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. 

A height balanced tree
        1
     /     \
   10      39
  /
5

An unbalanced tree
        1
     /    
   10   
  /
5
*/

int height(Node* root ){
    if( root == NULL ) return 0 ;
    
    return 1 + max( height(root->left) , height(root->right)) ;
}

bool isBalanced(Node *root)
{
    //  Your Code here
    
    if( root == NULL ) return 1 ;
    
    int hr = height(root->right) ;
    int lr = height(root->left) ;
    
    if( abs(lr-hr) <= 1 && isBalanced(root->left) && isBalanced(root->right)){
        return 1 ;
    }
    
    return 0 ;
    
}
