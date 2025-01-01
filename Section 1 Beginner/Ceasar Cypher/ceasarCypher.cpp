#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

string caesarCipher(string s, int k) {
    
    string answer = "";  

    //trick here is to realize that incrementing a char 'a' by 1 int gives you 'b' 
    //trck use isalpha(x) to determing if character is string  
    //trick mod for high values of k where the rotations need to be in a range 0 26 
    
    k = k%26; 
    
    for (char c : s){
        
        if(isalpha(c)){
            if(isalpha(c)){
                if(islower(c)){
                    
                    answer.push_back('a' +(c- 'a'+ k) % 26);
                }else if(isupper(c)){
                    
                    answer.push_back('A' + (c- 'A'+ k) % 26);
                }
            }
  
        }
        else{
            answer.push_back(c);
        }
    }
    
    return answer; 
}