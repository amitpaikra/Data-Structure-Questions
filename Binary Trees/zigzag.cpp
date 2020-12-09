//Question --> https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1
/*
Given a Binary Tree. Find the Zig-Zag Level Order Traversal of the Binary Tree.
*/
vector <int> zigZagTraversal(Node* root)
{
	// Code here
	vector<int> ans ;
	if( root == NULL ) return ans ;
	
	stack<Node*> s , s1 ;
	s.push(root) ;
	
    bool turn = false ;
	while(!s.empty()){
	    Node* temp = s.top() ;
	    s.pop() ;
	    
	    ans.push_back(temp->data) ;
	    if(!turn){
	    if( temp->left != NULL ){
	        s1.push(temp->left) ;
	    }
	    if( temp->right != NULL ){
	        s1.push(temp->right) ;
	    }
	    }else if(turn){
	        if( temp->right != NULL ){
	        s1.push(temp->right) ;
	    }
	    if( temp->left != NULL ){
	        s1.push(temp->left) ;
	    }
	    }
	    
	    if( s.empty() ){
	        turn = ( turn )? false : true ;
	        stack<Node*> temp_s = s1 ;
	        s1 = s ;
	        s = temp_s ;
	    }
	    
	}
	return ans ;
}
