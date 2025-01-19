#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int getTotalX(vector<int> a, vector<int> b) {
    
    int count = 0; 
    bool conditionOne = true; 
    bool conditionTwo = true; 
    
    for(int i=a[0]; i<=b.back(); i++){
        
        for(int j=0; j<a.size(); j++){
            if(i%a[j]!=0){
                conditionOne = false; 
                break; 
            }
        }
        for(int j=0; j<b.size(); j++){
            if(b[j]%i !=0){
                conditionTwo = false; 
                break; 
            }
        }
        if(conditionOne && conditionTwo) count++;
        conditionOne = true; 
        conditionTwo = true; 
    }
    
    return count; 

}