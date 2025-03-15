#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'organizingContainers' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts 2D_INTEGER_ARRAY container as parameter.
 */

string organizingContainers(vector<vector<int>> container) {
    int n = container.size();
    vector<int> containerCapacity(n, 0); // Total balls in each container
    vector<int> typeCount(n, 0); // Total balls of each type
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            containerCapacity[i] += container[i][j];
            typeCount[j] += container[i][j];
        }
    }
    
    sort(containerCapacity.begin(), containerCapacity.end());
    sort(typeCount.begin(), typeCount.end());

    return (containerCapacity == typeCount) ? "Possible" : "Impossible";
}

