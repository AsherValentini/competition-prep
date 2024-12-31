#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    
    int leftSum = 0; 
    int rightSum = 0; 
    
    // two pointers problem 
    int n = arr.size(); 
    for(int i=0; i<arr.size(); i++){
        
        leftSum += arr[i][i]; 
        rightSum += arr[n-1-i][i];
    }
    
    return abs(leftSum-rightSum); 

}