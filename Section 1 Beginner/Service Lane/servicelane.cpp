#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'serviceLane' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY cases
 */

vector<int> serviceLane(int n, vector<vector<int>> cases, vector<int>width) {
    
    vector<int> answer; 
    //1 based indexed inclusive 
    
    int left =0; 
    int right =0; 
    
    for(int i=0; i<cases.size(); i++){
        
        left = cases[i][0]; 
        right = cases[i][1]; 
        
        int minimum = INT_MAX; 
        
        for(int j=left; j<=right; j++){
            minimum = min(minimum, width[j]); 
        }
        
        answer.push_back(minimum);
    }
    
    return answer; 

}