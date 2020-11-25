\\ Question -> https://www.geeksforgeeks.org/given-an-array-of-of-size-n-finds-all-the-elements-that-appear-more-than-nk-times/
\\Given an array of size n and a number k, find all elements that appear more than n/k times

#include<bits/stdc++.h>
using namespace std ;

void morethanNbyK( int arr[]  , int n , int k  ){

    int count = n/k ;

    map<int , int> mp ;
    for( int i = 0 ; i < n ; i++ ){
      mp[arr[i]]++ ;
    }
    vector<int> ans ;
    for( auto it : mp ){
      if( it.second  >= count ){
        ans.push_back(it.first ) ;
      }
    }

    for( int i = 0 ; i < ans.size() ; i++ ){
      cout << ans[i] << " " ;
    }


}


int main(){
  #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
  int arr[]={4, 5, 6, 7, 8, 4, 4  } ;
  int n = sizeof(arr)/sizeof(arr[0]) ;
  int k = 3 ;
  morethanNbyK( arr , n  , k ) ;
  return 0 ;
}
