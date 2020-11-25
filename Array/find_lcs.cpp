// Question -> https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1#
/*
Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.
*/

int findLongestConseqSubseq(int arr[], int N)
{
  sort( arr , arr + N ) ;
  vector<int> vect ;
  vect.push_back(arr[0]) ;
  for( int i = 1; i < N ; i++ ){
      if( arr[i] != arr[i-1])
     vect.push_back(arr[i]) ;
  }
 
  int diff = 0 , _max = 0  , max_so_far = 1 ;
  for( int i = 1 ; i < vect.size() ; i++ ){
    
        _max = ( (vect[i] - vect[i-1]) == 1 )? _max + 1 : 0 ;
        max_so_far = max( _max+1 , max_so_far ) ;
  }
  
  return max_so_far ;
}
