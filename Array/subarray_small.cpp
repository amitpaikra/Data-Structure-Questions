// Question -> https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x/0#
/*
Given an array of integers (A[])  and a number x, find the smallest subarray with sum greater than the given value.
*/

#include <bits/stdc++.h>
using namespace std;

void subarray( vector<int>& arr , int n , int x ){
  //cout << arr.size() << endl ;
  int currSum = 0 , minLen = n+1 ;
  int start = 0 , end = 0 ; 
  while( end < n ){
      
      while( currSum <= x && end < n ){
          currSum += arr[end++] ;
      }
      while( currSum > x && start < n ){
          
          if( end-start < minLen ){
              minLen = end-start ;
          }
          
          currSum -= arr[start++] ;
      }
  }
  
  cout << minLen << "\n" ;
    
}

int main() {
	//code
    int t = 0 ; cin >> t ;
    while(t--){
        int n = 0  , x ; cin >> n >> x ;
        vector<int> arr(n) ;
        for( int i = 0 ; i < n ;i++ ){
            cin >> arr[i] ;
        }
        
        
        subarray( arr , n , x  ) ;
    }
	return 0;
}
