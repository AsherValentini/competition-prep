#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getWays' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. LONG_INTEGER_ARRAY c
 */

long helper(int n, const vector<long>& c, int index, vector<vector<long>>& memo) {
    // Base cases
    if (n == 0) return 1; // One way to make 0 (no coins used)
    if (n < 0 || index >= c.size()) return 0; // No valid combinations

    // Check if result is already memoized
    if (memo[n][index] != -1) return memo[n][index];

    // Include the current coin or skip it
    long include = helper(n - c[index], c, index, memo);   // Use the coin
    long exclude = helper(n, c, index + 1, memo);         // Skip the coin

    // Store the result in the memo table
    memo[n][index] = include + exclude;

    return memo[n][index];
}

long getWays(int n, vector<long> c) {
    // Memoization table: initialize with -1
    vector<vector<long>> memo(n + 1, vector<long>(c.size(), -1));

    // Start solving from the full amount and the first coin
    return helper(n, c, 0, memo);
}
