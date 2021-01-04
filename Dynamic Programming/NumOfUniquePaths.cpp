//Question --> https://practice.geeksforgeeks.org/problems/number-of-unique-paths5339/1
/*
Given a A X B matrix with your initial position at the top-left cell, find the number of possible unique paths to reach the bottom-right cell of the matrix from the initial position.

Note: Possible moves can be either down or right at any point in time, i.e., we can move to matrix[i+1][j] or matrix[i][j+1] from matrix[i][j].
*/
int NumberOfPath(int a, int b) {
    //code here
    
    int arr[a][b] ;
    
    for( int i = 0 ; i < a ; i++ ){
        for( int j = 0 ; j < b ; j++ ){
            if( i == 0 ) arr[i][j] = 1 ;
            else if( j == 0 ) arr[i][j] = 1 ;
            else arr[i][j] = arr[i-1][j] + arr[i][j-1] ; 
        }
    }
    
    return arr[a-1][b-1] ;
}
