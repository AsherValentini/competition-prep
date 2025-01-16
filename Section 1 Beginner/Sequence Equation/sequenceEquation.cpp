#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'permutationEquation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY p as parameter.
 */

int indexFinder(vector<int> p, int val) {
    int index = 0;
    for (int i = 0; i < p.size(); i++) {
        // Adjust for 1-based indexing
        if (p[p[i] - 1] == val) {
            index = i + 1; // Add 1 to make it 1-based
            break;
        }
    }
    return index;
}

vector<int> permutationEquation(vector<int> p) {
    vector<int> answer;

    for (int i = 1; i <= p.size(); i++) { // Loop starts from 1
        int index = indexFinder(p, i);
        answer.push_back(index);
    }

    return answer;
}