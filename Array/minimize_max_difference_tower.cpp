//Questions -> https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1#
//Minimize the heights
/*
Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.
*/

int getMinDiff(int arr[], int n, int k) {
        
        if( n == 1 ) return 0 ;
        
        n = sizeof(arr)/size(arr[0]) ;
        
        sort( arr , arr + n ) ;
        int _min = arr[0] , _max = arr[n-1]  ;
        for( int i = 0 ; i < n ; i++ ){
            if( abs(arr[i] - _min ) > abs(arr[i] - _max )){
                arr[i] -= k ;
            }
            else{
                arr[i]+= k ;
            }
        }
        
        int min1 = arr[0]  , max1 = arr[n-1] ;
        for( int i =1 ; i < n-1 ; i++ ){
            if( arr[i] < min1 ){
                min1 = arr[i] ;
            }
            if( arr[i] > max1 ){
                max1 = arr[i] ;
            }
        }
        
        return (max1-min1)  ;
    }
