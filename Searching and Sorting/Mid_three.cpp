// Question -> https://practice.geeksforgeeks.org/problems/middle-of-three2926/1
/*
Given three distinct numbers A, B and C. Find the number with value in middle (Try to do it with minimum comparisons).
*/
class Solution{
  public:
    int middle(int a, int b, int c){
    return ( a > b )? (( b > c )? b : (( a > c )? c : a )) : ( ( a > c )? a : ((b > c)? c : b )) ;
    }
        
    };
