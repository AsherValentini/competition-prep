#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'queensAttack' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER r_q
 *  4. INTEGER c_q
 *  5. 2D_INTEGER_ARRAY obstacles
 */

int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {
    // Initialize distances to edges of the board
    int left = c_q - 1; 
    int right = n - c_q; 
    int top = n - r_q; 
    int bottom = r_q - 1; 
    int topLeft = min(top, left);
    int topRight = min(top, right);
    int bottomLeft = min(bottom, left);
    int bottomRight = min(bottom, right);

    for (int i = 0; i < obstacles.size(); i++) {
        int r_o = obstacles[i][0]; 
        int c_o = obstacles[i][1];

        // Skip if the obstacle is the queen's position
        if (r_o == r_q && c_o == c_q) continue;

        // Left (same row, column less than queen)
        if (r_o == r_q && c_o < c_q) {
            left = min(left, c_q - c_o - 1);
        }
        // Right (same row, column greater than queen)
        else if (r_o == r_q && c_o > c_q) {
            right = min(right, c_o - c_q - 1);
        }
        // Top (same column, row greater than queen)
        else if (c_o == c_q && r_o > r_q) {
            top = min(top, r_o - r_q - 1);
        }
        // Bottom (same column, row less than queen)
        else if (c_o == c_q && r_o < r_q) {
            bottom = min(bottom, r_q - r_o - 1);
        }
        // Top-right diagonal
        else if (r_o > r_q && c_o > c_q && (r_o - r_q == c_o - c_q)) {
            topRight = min(topRight, r_o - r_q - 1);
        }
        // Top-left diagonal
        else if (r_o > r_q && c_o < c_q && (r_o - r_q == c_q - c_o)) {
            topLeft = min(topLeft, r_o - r_q - 1);
        }
        // Bottom-right diagonal
        else if (r_o < r_q && c_o > c_q && (r_q - r_o == c_o - c_q)) {
            bottomRight = min(bottomRight, r_q - r_o - 1);
        }
        // Bottom-left diagonal
        else if (r_o < r_q && c_o < c_q && (r_q - r_o == c_q - c_o)) {
            bottomLeft = min(bottomLeft, r_q - r_o - 1);
        }
    }

    // Sum all reachable positions
    return (left + right + top + bottom + topLeft + topRight + bottomLeft + bottomRight); 
}