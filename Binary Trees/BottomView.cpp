// Question--> https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1
/*
Given a binary tree, print the bottom view from left to right.
A node is included in bottom view if it can be seen when we look at the tree from bottom.
*/


vector <int> bottomView(Node *root)
{
   // Your Code Here
   vector<int> ans ;
   if( root == NULL ) return ans ;
   map<int , queue<int> > mp  ; map<int,int> mp2 ;
   
   queue<Node*> q ;
   q.push(root) ;
   mp[root->data].push(0) ;
   mp2[0] = root->data  ; 
   while(!q.empty()){
       Node* temp = q.front() ;
       q.pop() ;
       
       if( temp->left != NULL ){
           mp[temp->left->data].push(mp[temp->data].front()-1) ;
           mp2[mp[temp->data].front()-1] = temp->left->data ;
           q.push(temp->left) ;
       }
       if( temp->right != NULL ){
           mp[temp->right->data].push(mp[temp->data].front()+1) ;
           mp2[mp[temp->data].front()+1] = temp->right->data ;
           q.push(temp->right) ;
       }
       mp[temp->data].pop() ;
       
   }
   
   for( auto i : mp2 ){
       ans.push_back(i.second) ;
   }
   
   
   return ans ;
   
}
