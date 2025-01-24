#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'howManyGames' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER d
 *  3. INTEGER m
 *  4. INTEGER s
 */

int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    if(s<p)return 0;
    int count = 0; 
    while(s/m != 0 && s>p){
        s -= p; 
        p -=d; 
        count++; 
        if(p<m ){
            p=m; 
            int addToCount = s/p; 
            count = count +addToCount;  
            break;
        }

    }
    
    return count; 

}