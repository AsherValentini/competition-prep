#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {

    set<char> alphabet; 
    
    for(char c : s){
        if(isalpha(c))
        {
            alphabet.insert(tolower(c)); 
        }
    }
    
    return (alphabet.size() == 26) ? "pangram" : "not pangram"; 
    
    
}
