//Question ---> https://practice.geeksforgeeks.org/problems/coin-change2448/1#
/*
Given a value N, find the number of ways to make change for N cents, if we have infinite supply of each of S = { S1, S2, .. , SM } valued coins.
*/

class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
       
       long long int dp[m][n+1] ;
       
       for( int i = 0 ; i < m ; i++ ) dp[i][0] = 1 ; 
       for( int i = 1 ; i <= n ; i++ ) dp[0][i] = ( i%S[0] == 0 )? 1 : 0 ;
       
       for( int row = 1 ; row < m ; row++ ){
           for( int col = 1 ; col < n+1 ; col++ ){
               
               dp[row][col] = ( col < S[row])? dp[row-1][col] : dp[row-1][col]+dp[row][col-S[row]] ;
           
               
           }
       }
       
       long long int ans = dp[m-1][n] ;
       return ans ;
        
    }
};
