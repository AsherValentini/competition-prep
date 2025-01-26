#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'larrysArray' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER_ARRAY A as parameter.
 */



string larrysArray(vector<int> A) {
    
    
    int inversions= 0; 
    
    for(int i=0; i<A.size()-1; i++){
        for(int j=i+1; j<A.size(); j++){
            if(A[i]>A[j])
                inversions++; 
        }
    }
    
    if(inversions%2 !=0){
        return "NO"; 
    }
    return "YES"; 
}