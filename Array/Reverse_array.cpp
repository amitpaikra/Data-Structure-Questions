//Write a program to reverse an array or string
//Given an array (or string), the task is to reverse the array/string.

#include<iostream>
using namespace std ;

void _swap( int &a , int &b ){
	int temp =  a ;
	a =  b ;
	b = temp ;
}


int main(){

	int arr[10] = {1 , 2, 3, 4 ,5 , 6, 7 ,8  , 9 ,10  } ;
	int low  = 0 , high = sizeof(arr)/sizeof(arr[0]) -1 ;

	while(low < high ){
		cout << arr[low ]  << " " << arr[high] << endl ;
		_swap( arr[low]  , arr[high]) ;
		low++ ; high-- ;
	}

	for( int &i : arr ){
		cout << i << " " ;
	}

	return 0 ;

}
