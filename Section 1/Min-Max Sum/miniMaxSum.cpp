
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void miniMaxSum(vector<int> arr) {
    
    sort(arr.begin(), arr.end()); 
    
    long long max = accumulate(arr.begin()+1, arr.end(), 0LL); 
    long long min = accumulate(arr.begin(), arr.end()-1, 0LL);
    
    cout << min << " " << max << endl; 

}