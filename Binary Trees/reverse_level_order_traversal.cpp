//Question --> https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1#
/*
Given a binary tree of size N, find its reverse level order traversal. ie- the traversal must begin from the last level.
*/

vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans ;
    queue<Node*> q ;
    if( root == NULL ) return ans ; 
    
    q.push(root) ;
    while( !q.empty() ){
        Node* temp = q.front() ;
        q.pop() ;
        ans.push_back(temp->data) ;
        if( temp->right != NULL ) q.push(temp->right) ;
        if( temp->left != NULL ) q.push(temp->left) ;
        
    }
    
    reverse( ans.begin() , ans.end() ) ;
    return ans ;
}
