//Question -> https://github.com/amitpaikra/Data-Structure-Questions/new/main/Array
//Given an array arr[] of N integers, calculate the median

class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    sort( v.begin() , v.end()) ;
		    
		    int size = v.size() ;
		    if( size&1 ){
		        return v[(size/2 )] ;
		    }else{
		        return (v[(size/2) -1] + v[size/2  ])/2 ;
		    }
		}
};
 
