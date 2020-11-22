//Question -> https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0# 
/*
Given two arrays A and B of size N and M respectively. The task is to find union between these two arrays.
Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in union.
*/

#include <iostream>
#include<unordered_set>
using namespace std;

int main() {
	//code
	int t = 0 ; cin >> t ;
	while(t--){
	    
	    
	    int n = 0 , m =  0 ;  cin >> n >> m ;
	    unordered_set<int> arr1 ;
	    int temp = 0 ;
	    
	    for( int i = 0 ; i < n ; i++ ){ 
	        cin >> temp ;
	       // cout << temp << " " ;
	        arr1.insert(temp) ;
	    }
	    //cout << temp << " " ;
	    for( int j = 0 ; j < m ; j++ ){
	        cin >> temp ;
	        //cout << temp << " " ;
	        arr1.insert(temp) ;
	    }
	    cout << arr1.size() <<"\n" ;   
	}
	
	return 0;
}
