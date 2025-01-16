#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'gridSearch' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING_ARRAY G
 *  2. STRING_ARRAY P
 */

string gridSearch(vector<string> G, vector<string> P) {
    int gridRows = G.size(), gridCols = G[0].size();
    int patternRows = P.size(), patternCols = P[0].size();
    
    for (int i = 0; i <= gridRows - patternRows; ++i) {
        for (int j = 0; j <= gridCols - patternCols; ++j) {
            // Check if the first pattern matches
            bool found = true;
            for (int k = 0; k < patternRows; ++k) {
                for (int l = 0; l < patternCols; ++l) {
                    if (G[i + k][j + l] != P[k][l]) {
                        found = false;
                        break;
                    }
                }
                if (!found) break;
            }
            if (found) return "YES"; // Return immediately if match is found
        }
    }
    return "NO"; // Return NO if no match is found
}