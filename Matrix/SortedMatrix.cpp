//Question -> https://practice.geeksforgeeks.org/problems/sorted-matrix/0
/*
Given an n x n matrix, where every row and column is sorted in non-decreasing order. Print all elements of matrix in sorted order.
*/

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	
	int t = 0 ; cin >> t ;
	while( t-- ){
	    int n = 0 ; cin >> n; 
	    vector<int> ans(n*n) ;
	    for( int i = 0 ; i < n*n ; i++ ){
	        cin >> ans[i] ;
	    }
	    sort(ans.begin() , ans.end() ) ;
	    for(int i = 0 ; i < ans.size() ; i++ ){
	        cout<< ans[i] << " " ;
	    }
	    cout << "\n" ;
	}
	return 0;
}
