//Question-> https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together/0#
//Given an array of n positive integers and a number k. Find the minimum number of swaps required to bring all the numbers less than or equal to k together.

#include <bits/stdc++.h>
using namespace std;

int minSwap(vector<int>& vect , int n , int k ){
    int count = 0 ;
    for( int  i = 0 ; i < n ;i++ ){
        if( vect[i] <= k ){
            count++ ;
        }
    }
    int bad = 0 ;
    for( int i =0 ; i < count ; i++ ){
        if( vect[i] > k ){
            bad++ ;
        }
    }
    
    int ans = bad , start = 0 , end = count-1 ;
    while( start < n && end < n-1 ){
        
        end++ ;
        //cout << end << " "<< vect[end] << " " << vect[start] << "\n" ;
        bad = ( vect[end] > k )? bad+1 : bad ;
        bad = ( vect[start] > k)? bad-1 : bad ;
        start++ ;
        ans = min( bad ,  ans ) ;
    }
    return ans ;
}

int main() {
	//code
	int t = 0 ; cin >> t ;
	
	while(t--){
	    int n=0 ; cin >> n; 
	    vector<int> vect(n) ;
	    for( int i = 0 ; i < n ; i++ ){
	       cin >> vect[i] ;
	    }
	    int k = 0 ; cin >> k ;
	    
	    int ans = minSwap( vect , n , k ) ;
	    cout << ans << "\n" ;
	}
	
	return 0;
}
