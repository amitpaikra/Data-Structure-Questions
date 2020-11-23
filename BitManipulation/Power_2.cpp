// Question ->https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1#
// Given a positive integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.


bool isPowerofTwo(long long n){
    return (!(n&(n-1)) )? true : false ;
}
