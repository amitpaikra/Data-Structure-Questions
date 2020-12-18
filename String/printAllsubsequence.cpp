//Question --> https://www.geeksforgeeks.org/print-subsequences-string/

#include<bits/stdc++.h>
using namespace std ;


void printallsubseq( string str ){

  int total = pow( 2 , str.length() ) ;
  int size = str.length() ;
  for( int i = 1 ; i < total ; i++ ){
    int temp = i , j = 0  ;

    while(temp){
      if( temp&1 )  cout << str[j%size] ; 
    
      temp >>=1 , j++ ;
    }

    cout << "\n" ;
  }

}


int main(){
  
    #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif
 
    
    string str = "abcd" ;

    printallsubseq( str ) ;

    return 0 ;

}
