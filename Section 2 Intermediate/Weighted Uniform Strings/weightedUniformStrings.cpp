#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'weightedUniformStrings' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER_ARRAY queries
 */

vector<string> weightedUniformStrings(string s, vector<int> queries) {    
    unordered_set<long long>weights; 
    
    long long currentWeight = 0; 
    char prevChar = '\0';
    
    for(char c:s){
        
        if(c==prevChar){
            
            currentWeight = currentWeight + (c-'a'+1); 
        }else{
            currentWeight = c-'a'+1;             
        }
        
        prevChar = c; 
        
        weights.insert(currentWeight); 
        
    }
    vector<string> answer; 
    for(int query: queries){
        
        if(weights.count(query)){
            answer.push_back("Yes"); 
        }else{
            answer.push_back("No"); 
        }
    }
    
    
    return answer; 

}
