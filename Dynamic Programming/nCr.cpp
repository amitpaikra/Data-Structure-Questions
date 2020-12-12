//Question-->https://practice.geeksforgeeks.org/problems/ncr1019/1#
/*
Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 109+7.
*/
class Solution{
public:
    int nCr(int n, int r){
        int _mod = 1000000007 ;
        int arr[r+1][n+1]  ;
        
        for( int row = 0 ; row <= r ; row++ ){
            for( int col = 0 ; col <= n ; col++ ){
                if( row > col ) arr[row][col] = 0; 
                else if( row == 0 || row == col ) arr[row][col] = 1 ;
                else if ( row < col ){
                    arr[row][col] = (arr[row-1][col-1]%_mod + arr[row][col-1]%_mod)%_mod ;
                }
            }
        }
        
        
        return (int)(arr[r][n]%_mod) ;
    }
};
