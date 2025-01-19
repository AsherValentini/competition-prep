#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void extraLongFactorials(int n) {
    vector<int> result(1, 1); // Initialize with 1 (since 0! = 1)

    // Multiply numbers from 2 to n
    for (int x = 2; x <= n; ++x) {
        int carry = 0;
        for (int i = 0; i < result.size(); ++i) {
            int product = result[i] * x + carry;
            result[i] = product % 10; // Store last digit
            carry = product / 10;    // Carry for the next iteration
        }

        // Add remaining carry
        while (carry) {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }

    // Print the result in reverse order
    for (int i=result.size()-1; i>=0; i--) {
        cout << result[i];
    }
    cout << endl;
}