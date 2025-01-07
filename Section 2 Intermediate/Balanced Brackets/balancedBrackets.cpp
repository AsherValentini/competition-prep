#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isBalanced(string s) {
    
    vector<char>openBrackets; 
    
    for(char c:s){
        
        if (c == '{' || c == '[' || c == '('  ){
            openBrackets.push_back(c); 
        }else{
            
            if(openBrackets.empty()){
                return "NO"; 
            }
            if( (c == '}' && openBrackets.back()!= '{') || (c == ']' && openBrackets.back()!= '[')  || (c == ')' && openBrackets.back()!= '(')) return "NO"; 
            
            openBrackets.pop_back(); 
        }
    }
    
    return openBrackets.empty() ? "YES" : "NO"; 
}