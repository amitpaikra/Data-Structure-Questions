//Question -> https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1#
//Maximum Product Subarray 
/*
Given an array Arr that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.
*/

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	  long long  _maxVal = arr[0] , _minVal = arr[0] , _maxProd = arr[0] ;
	  
	  for( int i = 1 ; i < n ; i++ ){
	      
	      if(arr[i] < 0 ){
	          long long temp = _maxVal ;
	          _maxVal = _minVal ;
	          _minVal = temp ;
	      }
	      
	      _maxVal =  max( (long long)arr[i] , _maxVal*( (long long)arr[i]) ) ;
	      _minVal = min( (long long)arr[i] , _minVal*( (long long)arr[i]) ) ;
	      
	      _maxProd = max( _maxProd , _maxVal) ;
	      
	  }
	  
	  return _maxProd ;
	  
	}
};
