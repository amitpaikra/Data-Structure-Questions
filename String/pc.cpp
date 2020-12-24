//Question -- >https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1#
/*
Given an expression string x. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.
*/

bool ispar(string x)
{
    // Your code here
    stack<char> s ;
    for( int i = 0 ; i < x.length() ; i++ ){
        if( s.empty() ){ s.push(x[i]) ;  }
        else if( x[i] == '(' || x[i] == '{' || x[i] == '[' ) s.push(x[i]) ; 
        else {
            
            if( ( s.top() == '('  && x[i] == ')' ) || (s.top() == '{'  && x[i] == '}') || (s.top() == '['  && x[i] == ']') ){
                s.pop() ;
            }else{
                return false ;
            }
            
        }
    }
    if( s.empty() == false ) return false ;
    return true ;
}
