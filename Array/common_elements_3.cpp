//Question --> https://practice.geeksforgeeks.org/problems/common-elements1132/1#
//Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
//Note: can you take care of the duplicates without using any additional Data Structure?



class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {vector<int> ans ;
            int i = 0 , j = 0  , k = 0 , l = 0  ;
            while( (i < n1) && (j < n2) && (k < n3) ){
                    
                    if( A[i] == B[j] && B[j] == C[k] ){
                       if( l== 0){ 
                       ans.push_back(A[i]) ; l++ ;
                       }
                       else if( ans[l-1] != A[i] ){
                       ans.push_back(A[i]) ; l++ ;
                       }
                       
                      
                        i++ ; j++ ; k++  ;
                    }else if( A[i] < B[j] ){
                        i++ ;
                    }else if( B[j] < C[k]){
                        j++ ;
                    }else {
                        k++ ;
                    }
                    }
                    
            return ans ;
        }

};
