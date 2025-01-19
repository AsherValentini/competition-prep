#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c, int k) {
    

    int index = 0; 
    int e = 100; 
    
    while(true){
        
        index = (index+k)%c.size(); 
        e--; 
        if(c[index]==1)
            e -= 2;
        if(index == 0)
            break; 
            

    }

    return e; 

}