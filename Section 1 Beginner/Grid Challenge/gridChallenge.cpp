#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gridChallenge' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING_ARRAY grid as parameter.
 */

string gridChallenge(vector<string> grid) {
    
    for(string& s:grid){
        sort(s.begin(), s.end()); 
    }
    
    //perform the check
    for(int col=0; col<grid.size(); col++){
        for(int row=0; row<grid.size()-1; row++){
            
            if(grid[row][col]>grid[row+1][col]) return "NO"; 
        }
    }
    
    return "YES"; 

}
