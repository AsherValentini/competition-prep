#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'towerBreakers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 */

int towerBreakers(int n, int m) {


    if(m == 1) return 2; 
    
    if(m >1 && n%2 == 0) return 2; 
    
    if(m>1 && n%2 !=0) return 1; 
    
    return 0; 

}
