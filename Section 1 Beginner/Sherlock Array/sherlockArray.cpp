#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'balancedSums' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

string balancedSums(vector<int> arr) {
    
    int totalSum = accumulate(arr.begin(), arr.end(), 0); 
    int leftSum = 0;
    int rightSum = totalSum; 
    for(int i=0; i<arr.size(); i++){
        
        rightSum = rightSum-arr[i]; 
        if((leftSum-rightSum) ==0)return "YES"; 
        leftSum += arr[i]; 
        
    }
    return "NO"; 
}