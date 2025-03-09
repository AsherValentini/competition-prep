#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'biggerIsGreater' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING w as parameter.
 */

string biggerIsGreater(string w) {
    
    //step 1 find the rightmost pivot point
    int index = -1; 
    for(int i=w.size()-2; i>=0; i--){
        if(w[i]<w[i+1]){
            index = i; 
            break; 
        }
        
    }
    
    if(index == -1)
        return "no answer"; 
    
    //step 2 find the swap index 
    int swapIndex = -1; 
    for(int j=w.size()-1; j>index; j--){
        
        if(w[j]>w[index]){
            swapIndex = j; 
            break; 
        }
    }
    
    swap(w[index], w[swapIndex]); 

    // Step 3: Reverse the portion after index
    reverse(w.begin() + index + 1, w.end());

    return w; 
}
