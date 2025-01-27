#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'highestValuePalindrome' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER n
 *  3. INTEGER k
 */
 
string highestValuePalindrome(string s, int n, int k) {
    int left = 0, right = n - 1;
    vector<bool> changed(n, false); // Track changes made for optimization
    int replacements = 0;

    // Step 1: Make the string a palindrome
    while (left < right) {
        if (s[left] != s[right]) {
            char maxChar = max(s[left], s[right]);
            s[left] = maxChar;
            s[right] = maxChar;
            changed[left] = changed[right] = true; // Mark these indices as changed
            replacements++;
        }
        left++;
        right--;
    }

    // If required replacements exceed the budget
    if (replacements > k) {
        return "-1";
    }

    // Step 2: Maximize the palindrome
    left = 0, right = n - 1;
    int remainingChanges = k - replacements;

    while (left <= right) {
        if (left == right) { // Handle the middle character in case of odd-length string
            if (remainingChanges > 0 && s[left] != '9') {
                s[left] = '9';
            }
        } else {
            // If both characters are not '9', try upgrading to '9'
            if (s[left] != '9') {
                if (changed[left] || changed[right]) {
                    // We already used 1 replacement earlier; only 1 more needed here
                    if (remainingChanges > 0) {
                        s[left] = s[right] = '9';
                        remainingChanges--;
                    }
                } else {
                    // Need 2 replacements if these weren't changed before
                    if (remainingChanges >= 2) {
                        s[left] = s[right] = '9';
                        remainingChanges -= 2;
                    }
                }
            }
        }
        left++;
        right--;
    }

    return s;
}