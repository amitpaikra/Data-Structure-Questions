/*
Given two positive numbers calculate the minimum and maximum possible sums of two numbers. We are allowed to replace digit 5 with digit 6 and vice versa in either or both the given numbers.
*/

#include<iostream>
#include<sstream>
using namespace std ;


int main(){

  string num1 , num2 ;

  cin >> num1 >> num1 ;
  //min
  for( int i = 0 ; i < num1.size() ; i++ ){
    if( num1[i] == '6' ){
      num1[i] = '5' ;
     }
  }
  for( int j = 0 ; j < num2.size() ; j++ ){
    if(num2[j] == '6'){
      num2[j] = '5' ;
    }
  }

  stringstream s1(num1) , s2(num2) ;
  int s1_num = 0 , s2_num = 0;
  s1 >> s1_num ;
  s2 >> s2_num ;
  cout << "Minimum sum : " << s1_num + s2_num ;

  for( int i = 0; i < num1.size() ; i++ ){
    if( num1[i] == '5' ){
      num1[i] = '6' ;
    }
  }
  for( int i = 0 ; i < num2.size() ; i++ ){
    if( num2[i] == '5'){
      num2[i] = '6' ;
    }
  }


  stringstream s11(num1) , s22(num2) ;
  s11 >> s1_num ; s22 >> s2_num ;
  cout << "\nMaximum sum : " << s1_num + s2_num ;

  return 0 ;

}
