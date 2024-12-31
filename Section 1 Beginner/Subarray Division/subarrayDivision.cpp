#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

int birthday(vector<int> s, int d, int m) {
    
    int answer = 0; 
    
    for(int i=0; i<s.size(); i++){
        int tempSum =0; 
        for(int j=i; j<i+m; j++){
            
            tempSum += s[j]; 
        }
        if(tempSum == d) answer++; 
    }
    
    return answer; 

}