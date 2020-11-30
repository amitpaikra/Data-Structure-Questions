// Question -> https://practice.geeksforgeeks.org/problems/count-squares3649/1
/*
Consider a sample space S consisting of all perfect squares starting from 1, 4, 9 and so on. You are given a number N, you have to output the number of integers less than N in the sample space S.
*/

class Solution {
  public:
    int countSquares(int N) {
        // code here
        int count = 0; 
        for ( int i = 1 ; pow( i , 2 ) < N ; i++ ) count++ ;
        return count ;
    }
};
