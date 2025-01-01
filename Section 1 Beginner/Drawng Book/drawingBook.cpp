#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p) {
    
    if(n==1 || n==p){
        return 0;  
    }
    int index = p/2; 
    int totalSpreads = n/2; 
    
    return min(index, (totalSpreads-index)); 

}
