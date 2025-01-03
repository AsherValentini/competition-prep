#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'bomberMan' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING_ARRAY grid
 */

vector<string> det(vector<string> grid, int rows, int cols) {
    vector<string> nextGrid(rows, string(cols, 'O')); // Start with all bombs

    // Detonate bombs from the current grid
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 'O') {
                nextGrid[i][j] = '.';
                if (i > 0) nextGrid[i-1][j] = '.'; 
                if (i < rows - 1) nextGrid[i+1][j] = '.'; 
                if (j > 0) nextGrid[i][j-1] = '.'; 
                if (j < cols - 1) nextGrid[i][j+1] = '.'; 
            }
        }
    }
    return nextGrid;
}

vector<string> bomberMan(int n, vector<string> grid) {
    
    if(n == 1)return grid; //just the edge case
    
    int rows = grid.size(); 
    int cols = grid[0].size(); 
    
    vector<string> allBombs(rows, string(cols, 'O')); 
    
    if(n%2==0)return allBombs; 
    
    vector<string>stateOne = det(grid, rows, cols); 
    vector<string>stateTwo = det(stateOne, rows, cols); 
    
    if(n%4==3)return stateOne; 
    if(n%4==1)return stateTwo; 
    
    return grid; //should not get here

}
