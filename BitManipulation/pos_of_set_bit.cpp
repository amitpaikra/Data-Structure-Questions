//Question ->https://practice.geeksforgeeks.org/problems/find-position-of-set-bit3706/1
/*
Given a number N having only one ‘1’ and all other ’0’s in its binary representation, find position of the only set bit. If there are 0 or more than 1 set bit the answer should be -1. Position of  set bit '1' should be counted starting with 1 from LSB side in binary representation of the number.
*/

class Solution {
  public:
    int findPosition(int n) {
        return (  n &&!(n&(n-1)) )? log2(n)+1 : -1 ;
    }
};
