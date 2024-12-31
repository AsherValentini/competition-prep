#include <bits/stdc++.h>
#include <string>

using namespace std;

void plusMinus(vector<int> arr) {
    float pos, neg, zero; 
    pos=neg=zero=0; 
    for(int i=0; i<arr.size(); i++){
        
        if(arr[i]>0)pos++; 
        else if(arr[i]==0)zero++; 
        else if(arr[i]<0)neg++; 
    }
    
    float posRat = pos/arr.size(); 
    float negRat = neg/arr.size(); 
    float zeroRat = zero/arr.size(); 
    
    cout << posRat << endl; 
    cout << negRat << endl; 
    cout << zeroRat << endl; 
}
