#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string recursiveReducer(string s) {
    string Sprime = "";
    for (int i = 0; i < s.size(); i++) {
        if (i < s.size() - 1 && s[i] == s[i + 1]) {
            i++; // Skip the next character if there's a pair
        } else {
            Sprime.push_back(s[i]);
        }
    }
    if (Sprime.empty()) return "Empty String";
    if (Sprime == s) return Sprime; // If no change occurred, it means the string is reduced
    return recursiveReducer(Sprime); // Otherwise, continue reducing
}

string superReducedString(string s) {
    return recursiveReducer(s);
}