// Question -> https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix/0
/*
Given a matrix of size R*C. Traverse the matrix in spiral form.
*/
class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int row, int col) 
    {
        vector<int> ans ;
        int run = row*col ;
        int rlim = col-1 , dlim = row-1 , llim = 0 , ulim = 1 , turn = 0  ;
        int r = 0 , c= 0 ;
        while(run--){
            
            if( turn == 0  ){
                ans.push_back(matrix[r][c++]) ;
                if( c-1 == rlim ){ turn = 1 ; c-- ; r++ ; rlim-- ;}
            }else if( turn == 1 ){
                ans.push_back( matrix[r++][c]) ;
                if( r-1 == dlim ){ turn = 2 ; r-- ; c-- ; dlim-- ;}
            }else if( turn == 2 ){
                ans.push_back( matrix[r][c--]) ;
                if( c+1 == llim ){ turn = 3 ; c++ ; r-- ; llim++ ;}
            }else if( turn == 3 ){
                ans.push_back( matrix[r--][c]) ;
                if( r+1 == ulim ){ turn = 0 ; r++ ; c++ ; ulim++ ;}
            }
            
        }
        return ans ;
    }
};
