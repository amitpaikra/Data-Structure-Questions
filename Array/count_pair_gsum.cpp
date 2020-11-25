// Questions-> https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
//Count pairs with given sum 
//Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

class Solution{   
public:
    int getPairsCount(int arr[], int n, int sum) {
        // code here
        unordered_map<int , int> m ;
        for( int i = 0 ; i < n ; i++ ){
            m[arr[i]]++ ;
        }
        int count = 0 ;
        for( int j = 0 ; j < n ; j++ ){
            count += m[sum-arr[j]] ;
            
            if( sum- arr[j] == arr[j]){
                count-- ;
            }
        }
        return count/2 ;
    }
};
