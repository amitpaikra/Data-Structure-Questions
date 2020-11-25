//Question->https://practice.geeksforgeeks.org/problems/triplet-sum-in-array/0#
/*
Given an array A[] of N numbers and another number x, determine whether or not there exist three elements in A[] whose sum is exactly x.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	//code
	int t = 0  ; cin >> t ;
	while(t--){
	    bool flag = false ;
	    int n , b ;
	    cin >> n >> b ;
	    vector<int> vect(n) ;
	    for( int i = 0 ; i < n ; i++ ){
	        cin >> vect[i] ;
	    }
	    unordered_map<int , int> ump ;
	    for( int i = 0 ; i < n ;i++ ){
	        ump[vect[i]]++ ;   
	    }
	    for( int i = 0 ; i < n ; i++ ){
	        ump[vect[i]]-- ;
	        for( int j = i+1 ; j < n ; j++  ){
	            ump[vect[j]]-- ;
	            int temp = (vect[i]+vect[j]);
	            if( ump.find(b - temp) != ump.end() && ump[b-temp] > 0  ){
	               // cout << "b : " << b << "temp : " << temp << "\n" ;
	               // cout << vect[i] << " " << vect[j] << " " << b-temp  ;
	                flag = true ;
	                break ;
	            }
	            ump[vect[j]]++ ;
	        }
	        ump[vect[i]]++ ;
	        if(flag == true ) break ;
	    }
	    if( flag == true ) cout << 1 ;
	    else cout << 0 ;
	    cout << "\n" ;
	}
	return 0;
}
