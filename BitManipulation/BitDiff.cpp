// Question ->https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1#
//You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

int countBitsFlip(int a, int b){
    
    // Your logic here
    int res = a^b ;
    int count = 0 ;
    while(res){
        if( res&1 ) count++ ;
        res = res>>1 ;
    }
    return count ;
    
}
