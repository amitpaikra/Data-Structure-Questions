//Question --> https://www.geeksforgeeks.org/permutation-coefficient/
/*
P(n, k) = P(n-1, k) + k* P(n-1, k-1) 
*/

int main(){
  
  #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
 
    int t = 0  ; cin >> t ;
    while(t--){
      int n = 0 , k = 0 ; 
      cin >> n >> k  ;
      int p = 1 ;
      for( int i = 0 ; i < k ; i++ ){
        p *= (n-i) ;
        
      }
      cout << p << "\n" ;
    }
    return 0 ;

}
