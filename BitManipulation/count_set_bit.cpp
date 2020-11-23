// Question -> https://practice.geeksforgeeks.org/problems/set-bits0143/1
/*
Set Bits
Given a positive integer N, print count of set bits in it. 
*/


class Solution
{
public:
    int setBits(int N)
    {
        // Write Your Code here
        int count = 0 ;
        while( N ){
            if( N&1 ) count++ ;
            N = N>>1 ;
        }
        return count ;
    }
};
