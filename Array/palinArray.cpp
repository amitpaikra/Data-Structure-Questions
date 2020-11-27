// Question ->https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1#
/*
Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.
*/

#include <bits/stdc++.h>
using namespace std;

int PalinArray(int a[], int n)
{  
    for( int i = 0 ; i < n ; i++ ){
       
       string temp = to_string(a[i]) ;
       int low = 0  , high = temp.size() -1 ;
       while( low < high ){
           
           if( temp[low]!=temp[high]){
               return 0 ;
           }
           low++ ; high-- ;
       }
    }
    return 1 ;
}

int main() {
  //code
  #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
    int t = 0 ; cin >> t ;
    while(t--){
        int n = 0 ; cin >> n;
        //vector<int> arr(n) ;
        int arr[n] ;
        for( int i = 0 ; i < n ;i++ ){
            cin >> arr[i] ;
        }
        
        
       cout <<  PalinArray( arr , n ) << endl ;
    }
  return 0;
}
