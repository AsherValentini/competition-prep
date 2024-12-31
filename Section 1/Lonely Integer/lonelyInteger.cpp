#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'lonelyinteger' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int lonelyinteger(vector<int> a) {
    
       
    int answer = a[0]; 
    
    for(int i=1; i<a.size(); i++){
        answer ^= a[i]; 
    }
    
    return answer; 
    

}
