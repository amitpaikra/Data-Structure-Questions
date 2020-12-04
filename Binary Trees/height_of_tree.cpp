//Question --> https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1#
/*
Given a binary tree, find its height.
*/

class Solution{
    public:
    int height(struct Node* node){
        // code here 
        if( node == NULL ) return 0 ;
        return ( max( height(node->left) , height(node->right) ) +1 );
    }
};
