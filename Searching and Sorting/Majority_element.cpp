//Question ->https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1#
/*
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.
*/
int majorityElement(int a[], int size)
{
    
   unordered_map<int ,int> mp ;
   for( int i = 0 ; i < size;  i++ ){
       mp[a[i]]++ ;
   }
   
   int index = -1 ;
   int max = -1 ;
   
   for( auto i : mp ){
       if( i.second > size/2 ){
           if( max < i.second ){
               max = i.second ;
               index = i.first ;
           }
       }
   }
   return index ;
    
}
