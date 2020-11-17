

//Minimum sum of squares of character counts in a given string after removing k characters
/*
Given a string of lowercase alphabets and a number k, the task is to print the minimum value of the string after removal of ‘k’ characters. The value of a string is defined as the sum of squares of the count of each distinct character. For example consider the string “saideep”, here frequencies of characters are s-1, a-1, i-1, e-2, d-1, p-1 and value of the string is 1^2 + 1^2 + 1^2 + 1^2 + 1^2 + 2^2 = 9.
*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std ;
const int max_char = 26 ;
vector<int> alpha(max_char , 0 ) ;

int Minimum_sum_of_sq( string str , int k ){

  for( int i = 0 ; i < str.length() ; i++ ){
    alpha[(int)str[i] - 97 ]++ ;
  }

  priority_queue<int> pq ;
  for( int i = 0 ; i <  max_char ; i++ ){
    pq.push(alpha[i]) ;
  }

  while(k--){
    int temp = pq.top() ;
    pq.pop() ;
    temp = temp -1 ;
    pq.push(temp) ;
  }

  int ans = 0 ;
  while(!pq.empty()){
    int temp = pq.top() ;
    ans += temp*temp ;
    pq.pop() ;
  }

  return ans ;
 
}

int main(){
#ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
  string str ;
  cin >> str ;
  int k ; cin >> k ;

  cout  << (int)Minimum_sum_of_sq( str , k ) ;

}
