//Question ->https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x/0#
//First and last occurrences of X 
/*
Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t = 0 ; cin >> t ;
	while(t--){
	    int n =0 , x = 0  ; cin >> n >> x ;
	    int temp = 0  ;
	    int first = INT_MAX , second = INT_MIN ;
	    for( int i = 0 ;i < n ; i++ ){
	       cin >> temp ;
	        if( temp == x ){
	            first = min( first , i ) ;
	            second = max( second , i ) ;
	        }
	    }
	    if( first != INT_MAX )
	    cout << first << " " << second << "\n" ;
	    else
	    cout << -1 << "\n" ;
	}
	
	return 0;
}
