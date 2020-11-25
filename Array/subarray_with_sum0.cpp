//Question -> https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
//Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

bool subArrayExists(int arr[], int n)
{
    //Your code here
    unordered_set<int> sumset ; int sum = 0 ;
    for( int i = 0 ; i < n ; i++ ){
        sum += arr[i] ;
        if( sum == 0 || (sumset.find(sum) != sumset.end() ) ){
            return true ;
        }
        sumset.insert(sum) ;
        
    }
    return false ;
}
