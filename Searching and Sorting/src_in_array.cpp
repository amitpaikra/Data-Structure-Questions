//Question ---> geeksforgeeks.org/searching-array-adjacent-differ-k/
/*
Given an unsorted array Arr[] and a number N. You need to write a program to find if there exists a pair of elements in the array whose difference is N.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t = 0 ; cin >> t ;
	while( t--){
	    int N , L ; cin >> N >> L ;
	    int arr[N] ;
	    bool flag = false ;
	    for( int i = 0 ; i < N ; i++ ) cin >> arr[i] ; 
	    
	    for( int i = 0 ; i < N ; i++ ){
	        for( int j = 0 ; j < N ; j++ ){
	            //cout << abs(arr[i]-arr[j]) << endl ;
	            if( abs(arr[i]-arr[j]) == L ){
	                //cout << "ere" << endl; 
	                flag = true ;
	             //   cout << "iamhere" << endl ;
	                break ;
	            }
	        }
	        if( flag == true ) break ;
	        
	    }
	    if( flag) cout << 1 << "\n" ;
	    else cout << -1 << "\n" ;
	    
	}
	return 0;
}
