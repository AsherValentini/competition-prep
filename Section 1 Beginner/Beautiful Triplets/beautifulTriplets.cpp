#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int beautifulTriplets(int d, vector<int> arr) {
    int result =0; 
    
    for(int i=0; i<arr.size(); i++){
        
        int j = i+1; 

        while(j<arr.size() && arr[j]-arr[i]<d)
        {
            j++; 
        }
        if(arr[j]-arr[i] ==d){
            
            int k=j+1; 
            
            while(k<arr.size() && arr[k]-arr[j]<d){
                
                k++; 
            }
            if(arr[k]-arr[j]==d){
                result++; 
            }
        }
    }
    
    return result; 
}