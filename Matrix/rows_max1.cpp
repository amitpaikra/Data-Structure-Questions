//Question ->https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#
/*
Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.
*/
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    for( int i = 0 ; i < m ; i++ ){
	        for( int j = 0 ; j < n ; j++ ){
	            if( arr[j][i] ==  1 ) return j ;
	        }
	    }
	   return -1 ;
	}
    
};
