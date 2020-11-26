//Question -> https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0
/*
Given an array A of positive integers of size N, where each value represents number of chocolates in a packet. Each packet can have variable number of chocolates. There are M students, the task is to distribute chocolate packets such that :
1. Each student gets one packet.
2. The difference between the number of chocolates given to the students having packet with maximum chocolates and student having packet with minimum chocolates is minimum.


*/
#include <bits/stdc++.h>
using namespace std;


void choco_dist( vector<int>& arr , int n , int stud ){
    
    if( n < stud ) {cout << "-1" ; return ; }
    sort( arr.begin()  , arr.end() ) ;

    
    int min_diff = INT_MAX;
    for( int i = 0 ; i+stud-1 < arr.size() ; i++ ){
        int diff = arr[i+stud-1] - arr[i] ;
        if( diff < min_diff){
          min_diff = diff ;
        }
    }
    cout << min_diff ;
    cout << "\n" ;
}

int main() {  //code
  
  int t= 0 ; cin >> t ;
  while(t--){
      int n ; cin >> n ;
      vector<int> arr(n) ; for( int i = 0 ; i < n ; i++ ) cin >> arr[i] ;
      int stud = 0 ; cin >> stud ;
      choco_dist( arr , n  , stud  ) ;
   
  }
  return 0;
} 
