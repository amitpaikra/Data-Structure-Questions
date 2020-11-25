//Question-> https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers/0
// Given an integer, the task is to find factorial of the number.
#include<iostream>

 
using namespace std;
 
int multiply(int x,int a[],int size)
{
  int carry=0,i,p;
    
  for(i=0;i<size;++i)
  {
    p=a[i]*x+carry;
    a[i]=p%10;
    carry=p/10;
  }
    
  while(carry!=0)
  {
    a[size]=carry%10;
    carry=carry/10;
    size++;   
  }     
      return size;
}

void fac( int n ){
    int a[1000],i,size=1;
    a[0]=1;
 
 
    
      
    for(i=2;i<=n;++i) {
    size=multiply(i,a,size);        
    }
      
    for(i=size-1;i>=0;--i)
    {
    cout<<a[i];     
    }
}
     
int main()
{  
 
  int t = 0 ; cin >> t; 
  while(t--){
      int n ;
      cin >> n ;
      fac(n) ;
      cout << "\n" ;
  }
      
    return 0;
}
  
