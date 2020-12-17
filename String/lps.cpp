//Question -->https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string/0
/*
Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. Incase of conflict, return the substring which occurs first ( with the least starting index ).
*/

#include <iostream>
using namespace std;
void lps( string str ){

  int size = str.length() ;
  int max = 1  , start_index = -1 , end_index = -1 ;

  for( int i = 1 ; i <= size-1 ; i++ ){

    //even 
    int low = i-1 , high = i ;
    while( low >= 0  && high < size && str[low] == str[high]){
      if( high-low+1 > max ){
        max = high-low+1 ;
        start_index = low , end_index = high ;
      }
      low-- , high++ ;
    }

    //odd 
    low = i-1 , high = i+1 ;
    while( low >= 0 && high < size && str[low] == str[high]){
      if( high-low+1 > max ){
        max = high-low+1 ;
        start_index = low , end_index = high ;
      }
      low-- , high++ ;
    }

  }

  if( start_index == -1 || end_index == -1 ){
    cout << str[0] << "\n" ;
    return ;
  }


  for( int i = start_index ; i <= end_index ; i++ ){
    cout << str[i]  ; 
  }
cout << "\n" ;

}

int main() {
	//code
	int t = 0 ; cin >> t ;
	while(t--){
	    string temp ;
	    cin >> temp ;
	    lps( temp ) ;
	    
	}
	return 0;
}
