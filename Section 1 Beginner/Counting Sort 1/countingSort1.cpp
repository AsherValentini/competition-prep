#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'countingSort' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> countingSort(vector<int> arr) {
    
    vector<int>freq(100, 0); 
    
    for(int i=0; i<arr.size(); i++){
        
        freq[arr[i]]++; 
    }
    return freq; 
}