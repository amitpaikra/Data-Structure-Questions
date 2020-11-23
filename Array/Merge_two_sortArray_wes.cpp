// Questions -> https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1
/*
Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array in non-decreasing order without using any extra space.
*/


class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i = 0  ;
	    while( i < n  ){
	        
	        if( arr1[i] <= arr2[0] ){
	           
	            i++ ;
	        }else if( arr1[i] > arr2[0] ){
	            int temp = arr1[i] ;
	            arr1[i] = arr2[0] ;
	            arr2[0] = temp ;
	            i++ ;
	        }
	        
	    }
	    
	}
};
