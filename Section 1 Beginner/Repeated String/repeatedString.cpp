#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'repeatedString' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. LONG_INTEGER n
 */

long repeatedString(string s, long n) {
    
    long count = 0; 
    /*
    auto it = s.begin();
    for(long i=0; i<n; i++){
        
        if(*it=='a')count++; 
        it++; 
        if(it==s.end())
            it=s.begin(); 
        
    }*/
    
    if(n<s.size()){
        for(long i=0; i<n; i++){
            
            if(s[i]=='a')count++; 
       
        }
        return count; 
    }
    
    int freq = 0; 
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a')freq++; 
    }
    
    long lastLoop = n%s.size(); 
    long multipler = n/s.size(); 
    count = freq*multipler; 
    for(int i=0; i<lastLoop; i++){
        if(s[i]=='a')count++; 
    }
    return count; 
    
}