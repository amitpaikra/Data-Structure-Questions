// Question --> https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1#
/*
Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.
*/

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        
        sort( arr , arr+n) ;
        int *ans = new int[2] ;
        
        bool missing = false ;
        
        
        for( int i = 0 ; i < n ; i++ ){
            if(  i < (n-1) && arr[i] == arr[i+1]){
                ans[0] = arr[i] ;
             //   cout << ans[i] << " " ;
            }
            if( i+1 < arr[i] && missing == false ){
                ans[1] = i+1 ;
                missing = true ;
            }
            if( i+1 < n && arr[i+1]-arr[i] == 2 && missing == false ){
              //  cout << arr[i+1] << " " << arr[i] << endl ;
                ans[1] =  arr[i]+1;
                missing = true ;
            }
            
            
        }
        if( arr[n-1] != n ){
            ans[1] = n ;
        }
        
        return ans ;
    }
};
