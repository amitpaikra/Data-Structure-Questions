//Smallest number with sum of digits as N and divisible by 10^N
#include<iostream>
#include<string>
using namespace std ;

string fun(  int n ){
  
  int temp = n ; string str = "" ;
  
  while( temp >= 9 ){ 
    str += '9' ;
    temp -= 9 ;
  }
  if( temp != 0 )
  str += to_string(temp) ;
  string temp_str = "" ;
  
  for( int i = str.length()-1 , j = 0  ; i >= 0  ; i-- , j++ ){
      temp_str+= str[i] ;
  }

  for( int i =0 ; i < n ; i++ ){
    temp_str += '0' ;
  }

  return temp_str ;
}

int main(){

  #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif

  int n = 0; cin >> n ;
  string ans ;
  ans = fun( n ) ;
  cout << ans  ;
  return 0 ;
}
