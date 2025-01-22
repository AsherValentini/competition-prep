#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'cutTheSticks' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */


vector<int> cutTheSticks(vector<int> arr) {
    
    vector<int>answer;
    map<int, int>stickFreq; 
        
    for(auto stick:arr){
        stickFreq[stick]++; 
    }
    
    int totalSticks = 0; 
    for(auto entry:stickFreq){
        
        totalSticks+= entry.second; 
    }  
    
    for(auto entry:stickFreq){
        answer.push_back(totalSticks);
        totalSticks -= entry.second; 
    }  

    
    return answer; 

}