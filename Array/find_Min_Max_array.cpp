//Maximum and minimum of an array using minimum number of comparisons
//Write a C function to return minimum and maximum in an array. You program should make minimum number of comparisons. 

#include<iostream>
#include<climits>
using namespace std ;

struct alles
{
	int min ;
	int max ;
} ;


struct alles find_min_max_array(int arr[] , int low , int high  ){

	struct alles getmaxmin ;
	getmaxmin.min = INT_MAX ;
	getmaxmin.max = INT_MIN ;

	if( low == high ){
		getmaxmin.min = arr[low]  ;
		getmaxmin.max = arr[high] ;
		return getmaxmin ;
	}
	else if( high  == low + 1  ){

		getmaxmin.min = ( arr[low] < arr[high])? arr[low] : arr[high] ;
		getmaxmin.max = ( arr[low ] < arr[high])? arr[high] : arr[low] ;

		return getmaxmin ;
	}else{

		int mid = (low + high )/2 ;
		struct alles p1 , p2 ;
		p1 = find_min_max_array( arr , low , mid ) ;
		p2 = find_min_max_array( arr , mid+1 , high ) ;

		getmaxmin.min = (p1.min > p2.min)? p2.min : p1.min;
		getmaxmin.max = ( p1.max > p2.max )? p1.max : p2.max ;
		return getmaxmin ;
	}
}




int main(){

	int arr[11] = {1 , 2, 3, 4 ,100 , 0, 1000 ,8  , 9 ,10 , 2  } ;
	int low  = 0 , high = sizeof(arr)/sizeof(arr[0]) -1 ;

	struct alles minmax = find_min_max_array( arr   , low , high ) ;

	cout << "min : " << minmax.min ;
	cout << "\nmax : " << minmax.max ;


	return 0 ;

}
