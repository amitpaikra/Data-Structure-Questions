//Question-->
/*
Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers. If such arrangement is not possible, it must be rearranged as the lowest possible order ie, sorted in an ascending order.

For example:
1,2,3 → 1,3,2
3,2,1 → 1,2,3
*/

#include<bits/stdc++.h>
using namespace std ;

inline void _swap( int& a , int& b ){
    int temp = a ;
    a = b ; 
    b = temp ;
}



int main(){
  
 int t = 0 ; cin >>  t ;
  while(t--){
    //cout << "hello " << "\n" ;
      int n = 0 ; cin >> n;
      int arr[n] ;
      for( int i = 0 ; i < n ; i++ ){
          cin >> arr[i] ;
      }
      int cnt = 0 , tar_index = -1 ;
      for( int i = 0 ; i < n-1 ; i++ ){
          if( (arr[i+1]-arr[i]) < 0 ){
         //   cout << arr[i+1]-arr[i] << "\n" ;
              if( cnt >= 0 ) tar_index = i-1 ;
              cnt-- ;
          }else if( cnt < 0 ){
              cnt = 0;
          }
          
      }
      
      if( tar_index < 0 && cnt >= 0  ) { _reverse( arr, 0 , n-1) ;}
      
      if( cnt >= 0 && !(tar_index < 0 ) || abs(cnt)+1 == n  ){
         _swap( arr[n-1] , arr[n-2]) ;
      }else if( !(tar_index < 0 )){
          int diff = INT_MAX , swap_e = -1;
          for( int i = tar_index+1 ; i < n ; i++ ){
              if( abs(arr[i] - arr[tar_index]) < diff  ){
                  diff= abs(arr[i]-arr[tar_index]) , swap_e = i ;
              }
          }
         // cout << swap_e << " " << tar_index << " \n" ;
          _swap( arr[swap_e] , arr[tar_index]) ;
        //  _reverse( arr , tar_index+1 , n-1 ) ;
          sort( arr+ tar_index+1 , arr+ n ) ;
          
          
      }
      
      for( int i = 0; i < n ; i++ ){
          cout << arr[i] << " " ;
      }
      cout << "\n" ;
      
      
  }
  return 0;

}
