#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY strings
 *  2. STRING_ARRAY queries
 */

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    
    vector<int>freq(queries.size(), 0); 
    
    for(int i=0; i<queries.size(); i++){
        
        for(string string:strings){
            
            if(queries[i]==string){
                freq[i]++; 
            }
        }
    }
    
    return freq; 

}