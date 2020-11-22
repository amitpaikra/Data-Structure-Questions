// Question -> https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0#
//Given an array, cyclically rotate an array by one.
//Algorithm Complexity -> time -- O(t*n) and space -- O(n) because of array size for storing elements ;

#include <iostream>
#include<vector>
using namespace std;


int main() {
	//code
	
	int t = 0 ; cin >> t ;
	while(t--){
	    int n = 0 ; cin >> n; 
	    vector<int> arr(n) ;
	    for( int i = 0 ; i < n ; i++ ){
	        cin >> arr[(i+1)%n] ;
	    }
	    for( int j = 0 ; j < n ; j++ ){
	       
	        cout <<  arr[j] << " " ;
	    }
	    cout << "\n" ;
	}
	
	return 0;
}
