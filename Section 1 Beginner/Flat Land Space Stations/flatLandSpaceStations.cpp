#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the flatlandSpaceStations function below.
int flatlandSpaceStations(int n, vector<int> c) {
    
    int maxD2S = INT_MIN; 
    for(int i=0; i<n; i++){
        int minD2S = INT_MAX; 
        for(int station:c){
            
            minD2S = min(minD2S, abs(i-station)); 
        }
        
        maxD2S = max(maxD2S, minD2S);
        
    }
    
    return maxD2S; 


}