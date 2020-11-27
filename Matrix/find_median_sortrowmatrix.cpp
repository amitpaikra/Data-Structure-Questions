//Question ->https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1# 
//Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.


class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here         
        int tar = (r*c)/2 ;
        int median = -1 , _min = INT_MAX  , min_i = 0 ;
        vector<int> point(r , 0 ) ;
        for( int i = 0  ; i <= tar ; i++ ){
            _min = INT_MAX ;
            for( int j = 0; j < r ; j++ ){
               
               if( point[j] < matrix[j].size() && _min > matrix[j][point[j]] ){
                   _min = matrix[j][point[j]] ;
                   min_i = j ;
                //   cout << _min << " " << min_i << endl ;
               }
               
            }
            point[min_i]++ ;
            
        }
        median = matrix[min_i][point[min_i]-1] ;
        return median ;
    }
};
