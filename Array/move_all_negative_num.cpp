//Question link-> https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
//Move all negative numbers to beginning and positive to end with constant extra space
// Alogrithm time complexity = O(n) and space complexity  = O(1) 

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int main(){

	
	int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int low = 0 , high = arr_size-1 ;

    while(low < high){

    	if( arr[low] < 0 && arr[high] < 0 ){
    		low++ ;
    	}else if( arr[low] < 0 && arr[high] >= 0){
    		low++ ; high-- ;
    	}else if( arr[low] >= 0 && arr[high] < 0){
    		int temp = arr[low] ;
    		arr[low] = arr[high] ;
    		arr[high] = temp ;
    		low++ ; high-- ;
    	}else if( arr[low] >= 0 && arr[high] >= 0 ){
    		high-- ;
    	}

    }


    for( int i = 0 ; i < arr_size ; i++ ){
    	cout << arr[i] << " " ;
    } 

   
	
	return 0 ;

}

