#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) {
    
 
    int pairs =0; 
    sort(ar.begin(), ar.end()); 
    
    for(int i=0; i<ar.size()-1; i++){
        
        if(ar[i]==ar[i+1]){
            pairs++; 
            i++; 
        }
    }
    
    return pairs; 

}