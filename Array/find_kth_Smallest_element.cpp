/*
Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

Expected Time Complexity: O(n)
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;




int main(){

	
	int t = 0 ; cin >> t ;
	while(t--){
		int n  = 0 ; cin >> n ;
		vector<int>arr(n) ;
		for( int i = 0 ; i < n ;i++ ){
			cin >> arr[i] ;
		}
		int k = 0 ; cin >> k ;
		sort( arr.begin()  , arr.end()) ;

		cout << arr[k-1] <<"\n" ;
	}

	return 0 ;

}

