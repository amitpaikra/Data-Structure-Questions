// Question --> https://practice.geeksforgeeks.org/problems/edit-distance3702/1
/*
Given two strings s and t. Find the minimum number of operations that need to be performed on str1 to convert it to str2. The possible operations are:

Insert
Remove
Replace
 
*/

int editDistance(string s, string t)
		{
		   int ssize = s.size()  , tsize = t.size() ;
		   
		   int arr[ssize+1][tsize+1];
		   for( int i = 0 ; i <= ssize ; i++ ){
		       arr[i][0] = i ; 
		   }
		   for( int j = 0 ; j <= tsize ; j++ ){
		       arr[0][j] = j ;
		   }
		   for( int i = 1 ; i <= ssize ; i++ ){
		       for( int j = 1 ; j <= tsize ; j++ ){
		           
		           if( s[i-1] == t[j-1]){
		               arr[i][j] = arr[i-1][j-1] ;
		           }else{
		               arr[i][j] = min( arr[i-1][j-1]  , min(arr[i-1][j] , arr[i][j-1]) ) + 1 ;
		           }
		           
		       }
		   }
		   
		   return arr[ssize][tsize] ;
		}
};
