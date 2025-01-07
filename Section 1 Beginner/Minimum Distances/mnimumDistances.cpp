#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'minimumDistances' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int minimumDistances(vector<int> a) {
    
    int absMin = INT_MAX; 
    int currentDistance =0; 
    bool pairFound = false; 
    
    for(int i=0; i<a.size(); i++){
        
        for(int j=0; j<a.size(); j++){
            
            if(a[i]==a[j] && i!=j){
                
                pairFound= true; 
                currentDistance = abs(i-j); 
                absMin = min(absMin, currentDistance); 
            }
        }
    }
    
    return pairFound ? absMin : -1 ; 
}