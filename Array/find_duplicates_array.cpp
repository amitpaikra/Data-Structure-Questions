// [Question link ](https://leetcode.com/problems/find-the-duplicate-number/)
/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one duplicate number in nums, return this duplicate number.
*/
// Find the Duplicate Number

#include<bits/stdc++.h>
using namespace std ;


int dup( int arr[] , int n ){

	for( int i = 1 ; i <= n ; i++ ){

		if( arr[i-1] != i ){
			if( arr[arr[i-1]-1] == arr[i-1] ){
				return arr[i-1] ;
			}else{
				int temp = arr[i-1] ;
				arr[i-1] = arr[arr[i-1]] ;
				arr[arr[i-1]] = temp ;
			}
		}
	}
	return -1 ;
}

int main(){

	#ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
    
	int t = 0   ;
	cin >> t ;

	while(t--){
		int n  ;
		cin >> n ;
		
		int arr[n] ;
		for( int i = 0 ; i < n ;i++ ){
			cin >> arr[i] ;
		}
		
		cout << dup( arr , n ) << "\n" ;
		
	}

	return 0 ;
}
