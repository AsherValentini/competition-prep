#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'equalizeArray' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int equalizeArray(vector<int> arr) {
    
    unordered_map<int, int>freq; 
    
    for(int num:arr){
        
        freq[num]++; 
    }
    
    int maxFreq = INT_MIN; 
    
    for(auto entry:freq){
        
        maxFreq = max(maxFreq, entry.second);
        
    }
    
    return arr.size()-maxFreq; // this formula might have been tricky to know without prior knowledge 

}