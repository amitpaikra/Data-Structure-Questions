//Question-->https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence/0
/*
Given a string str, find length of the longest repeating subseequence such that the two subsequence don’t have same string character at same position, i.e., any i’th character in the two subsequences shouldn’t have the same index in the original string.
*/
#include <iostream>
#include<map>
#include<string>
using namespace std;

void lrs( string str ){

  int size = str.length() ;
  
  int dp[size+1][size+1] ;
  for( int i = 0 ; i <= size ; i++ ){
      for( int j = 0 ; j <= size ; j++ ){
          dp[i][j] = 0 ;
      }
  }
  
  for( int i = 1 ; i <= size ; i++ ){
      for( int j = 1 ; j <= size ; j++ ){
          
          if( str[i-1] == str[j-1] && i != j ){
              dp[i][j] = 1 + dp[i-1][j-1] ;
          }else{
              dp[i][j] = max( dp[i-1][j] , dp[i][j-1]) ;
          }
      }
  }
  
  cout << dp[size][size] << "\n" ;

}

int main() {
	//code
	int t = 0 ; cin >> t ;
	while(t--){
	    int n ; 
	    cin >> n ;
	    string temp ; cin >> temp ;
	    lrs(temp);
	    
	}
	return 0;
}
