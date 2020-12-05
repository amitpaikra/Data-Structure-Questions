//Questions ---> https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1
/*
Given a Binary Tree, print Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function leftView(), which accepts root of the tree as argument.
*/
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans ;
   Node* temp = root ;
   while(temp){
       ans.push_back(temp->data) ;
       if( temp->left == NULL ) temp = temp->right ;
       else temp = temp->left ;
       
   }
   return ans ;
   
}
