//Question -> https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
//Minimum number of jumps
/*
Given an array of integers where each element represents the max number of steps that can be made forward from that element. Write a function to return the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then cannot move through that element.
*/

#include<bits/stdc++.h>
using namespace std ;

int minJumps(int arr[], int n){
    // Your code here
    if( n == 0 ){
        return -1 ;
    }else if( n == 1 ){
        return 0 ;
    }
    vector<int> vect(n , INT_MAX) ;
    vector<bool> visit( n , false) ;
    vect[0] =  0 ;
    int jump = 0 ;
    for( int i = 0 ; i < n ;){
    	jump = vect[i] + 1;
        int upto = ( arr[i]+i+1 < n )? arr[i]+i+1 : n ; //cout << upto << " " ;
        for( int j = i+1 ; j < upto ; j++  ){
            //cout << arr[j] << " " ;
            if( vect[j] > jump ){
                vect[j] = jump ;
            }
            visit[j] = true ;
           // cout << vect[j] << " " ;
        }
        //cout << "\n" ;

        int min = INT_MAX  , index_min = 0 ;
        for( int imin = i+1 ; imin < vect.size() ; imin++ ){
            if( vect[imin] < min ){
                index_min = imin ;
                min = vect[imin] ;
            }
        }
        if( min == INT_MAX ) break; 
        
         i = index_min ;
       //  cout << "\nindex_min" << i <<" "<< min << "\n" ;
        
    }
    
    
    if( vect[n-1] == INT_MAX ) return -1 ;
    
    return vect[n-1] ;
    
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
		cout << minJumps( arr , n ) << "\n" ;
		
	}

	return 0 ;
}
