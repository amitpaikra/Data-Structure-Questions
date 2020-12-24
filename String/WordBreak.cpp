//Question--->https://practice.geeksforgeeks.org/problems/word-break1352/1#
/*
Given a string A and a dictionary of n words B, find out if A can be segmented into a space-separated sequence of dictionary words.
*/

struct TrieNode{
  TrieNode* child[256] ;
  bool isEndofword  ;
  TrieNode(){
    for( int i = 0 ; i < 256 ; i++ ){
      child[i] = NULL ;
      isEndofword = false ;
    }
  }
};

bool search( TrieNode *root , string key ){
  TrieNode *curr = root ;
  int lastvisit = -1 ;
  for( int i = 0 ; i  < key.length() ; i++ ){
    if( curr->child[key[i]] == NULL ) {
      curr = root  ;
      if( lastvisit == i ) return false ;
      lastvisit = i-- ;
      continue ;
    } 
    curr = curr->child[key[i]] ;
  }
  return curr->isEndofword ; 
}

void insert( TrieNode *root , string key ){
  TrieNode *curr = root ;
  for( int i = 0 ; i < key.length() ; i++ ){
    if( curr->child[key[i]] == NULL ){
      curr->child[key[i]] = new TrieNode() ;
      //curr = curr->child[key[i]] ;
    }
    curr = curr->child[key[i]] ;
  }
  curr->isEndofword = true ;
}


int wordBreak(string A, vector<string> &B) {
    //code here
     
    TrieNode* root  = new TrieNode;
    for( int i = 0 ; i < B.size() ; i++ ){
      insert( root , B[i]) ;
    }

    

    return (int)search( root , A) ;
    
}
