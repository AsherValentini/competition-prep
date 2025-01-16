#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'findDigits' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int findDigits(int n) {
    
    string N = to_string(n); 
    int divCount = 0; 
    
    for(int i =0; i<N.size(); i++){
        int digit = (N[i]-'0');
        cout <<digit; 
        
        if (digit == 0) {
            continue;
        }
        if((n%digit)==0){
            divCount++; 
        }
    }    
    
    return divCount; 
}