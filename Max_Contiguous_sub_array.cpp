// Question -> https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
//Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
//Kadane's Algorithm

int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int max_uptil = INT_MIN  , max_upto = 0 ;
    for( int i = 0 ; i < n ;i++ ){
        
        max_upto += arr[i] ;
        max_uptil = max( max_upto , max_uptil ) ;
        max_upto = max( max_upto  , 0 ) ;
    }
    
    return max_uptil ;
}
