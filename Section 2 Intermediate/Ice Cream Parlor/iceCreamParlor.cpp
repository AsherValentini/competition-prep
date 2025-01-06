#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'icecreamParlor' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER m
 *  2. INTEGER_ARRAY arr
 */

vector<int> icecreamParlor(int m, vector<int> arr) {

    //declare the answer return

    vector<int> answer;
    
    for(int j=0; j<arr.size(); j++){
        for(int i= 0; i<arr.size(); i++){
            if(arr[j]+arr[i]==m && j!=i){
                answer.push_back(j+1); 
                answer.push_back(i+1); 
                return answer; 
            }
        }
    }
    
    return answer; 
}