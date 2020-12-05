//Question --> https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1
/*
Given a Binary Tree, find Right view of it. Right view of a Binary Tree is set of nodes visible when tree is viewed from right side.
*/

void rv( Node *root , int level , int& max_level , vector<int> &ans ){
    if( root == NULL ) return ;
    if( max_level  < level ){
        ans.push_back(root->data) ;
        max_level = level ;
    }
    
    rv( root->right , level+1 , max_level , ans ) ;
    rv( root->left , level+1 , max_level ,ans ) ;
}

// Should return  right view of tree
vector<int> rightView(Node *root)
{
   vector<int> ans ;
   int max_level = 0 ;
   rv( root , 1 , max_level  , ans ) ;
   return ans ;
}
