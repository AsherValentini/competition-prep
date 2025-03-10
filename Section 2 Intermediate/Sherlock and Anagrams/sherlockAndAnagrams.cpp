#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'sherlockAndAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int sherlockAndAnagrams(string s) {
    
    int totalPairs = 0;
    int n = s.length();

    // Step 2: Iterate over all substring lengths
    for (int len = 1; len <= n; ++len) {
        unordered_map<string, int> freqMap;  // Store frequency signatures

        // Step 2.3: Iterate over all substrings of length 'len'
        for (int i = 0; i <= n - len; ++i) {
            vector<int> freq(26, 0);  // Frequency array for 'a' to 'z'

            // Create frequency signature
            for (int j = 0; j < len; ++j) {
                freq[s[i + j] - 'a']++;  // Increment frequency
            }

            // Convert frequency array to a string key
            string key = "";
            for (int k = 0; k < 26; ++k) {
                key += to_string(freq[k]) + "#";  // Unique delimiter for safety
            }

            // Store in frequency map and count occurrences
            freqMap[key]++;
        }

        // Step 3: Compute anagrammatic pairs using nC2 formula
        for (auto &entry : freqMap) {
            int count = entry.second;
            if (count > 1) {
                totalPairs += (count * (count - 1)) / 2;  // Combination formula
            }
        }
    }

    return totalPairs;

}