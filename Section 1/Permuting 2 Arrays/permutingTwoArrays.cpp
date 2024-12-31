#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'twoArrays' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY A
 *  3. INTEGER_ARRAY B
 */

string twoArrays(int k, vector<int> A, vector<int> B) {
    
    sort(A.begin(), A.end()); 
    sort(B.rbegin(), B.rend()); 
    
    for(int i=0; i<A.size(); i++){
        if((A[i]+B[i])<k)return "NO"; 
    }
    return "YES"; 

}