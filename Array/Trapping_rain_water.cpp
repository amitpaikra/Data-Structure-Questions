//Question -> https://practice.geeksforgeeks.org/problems/trapping-rain-water/0#
/*
Given an array arr[] of N non-negative integers representing height of blocks at index i as Ai where the width of each block is 1. Compute how much water can be trapped in between blocks after raining.

Structure is like below:
| |
|_|
We can trap 2 units of water in the middle gap.
*/
#include <bits/stdc++.h>
using namespace std;


void water_trapping( vector<int>& arr , int n ){
    
    int left[n] ,  right[n] ;
    for( int i = 0 ; i < n ; i++ ){
        left[i] = 0 ; right[i] = 0 ;
    }
    left[0] = arr[0] ; right[n -1] = arr[n-1] ;
    for( int i = 1 ; i < n ; i++ ){
        left[i] = max( arr[i] , left[i-1] ) ;
    }
    for( int i = n-2 ; i >= 0 ; i-- ){
        right[i] = max( arr[i] , right[i+1]) ;
    }
    
    int water = 0 ; 
    for( int i = 0; i < n ; i++ ){
        water += min( left[i] , right[i] ) - arr[i] ;
    }
        cout << water  ;
    
}

int main() {  
  int t= 0 ; cin >> t ;
  while(t--){
      int n=0 ; cin >> n ;
      vector<int> arr(n) ; for( int i = 0 ; i < n ; i++ ) cin >> arr[i] ;
      
     water_trapping( arr , n );
      cout <<"\n" ;
     
  }
  return 0;
}
