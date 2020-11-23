//Question -> https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1 
/*
Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. Find the other two numbers  (in ascending order).
*/
class Solution
{
public:
    vector<int> singleNumber(vector<int>& arr) 
    {
        // Code here.
        int res = 0 ;
        int n = arr.size() ;
        for( int i = 0 ; i < n ; i++ ) res^=arr[i] ;
        int k = log2(res & -res) ;
        int x = 0 , y = 0 ;
        for( int i = 0 ; i < n ; i++ ){
            if( arr[i] & (1<<k)) x^=arr[i] ;
            else y = y^arr[i] ;
        }
        vector<int> p ;
        if( x > y ){ 
            int temp = x ;
            x = y ;
            y = temp ;
            
        }
        p.push_back(x) ;
        p.push_back(y) ;
        return p ;
        
    }
};
