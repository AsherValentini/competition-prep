#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'superDigit' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING n
 *  2. INTEGER k
 */

int getSuperDigit(long long num){
    
    if(num<10)return num; 
    
    long long sum = 0; 
    while(num>0){
        sum += num % 10; 
        num /= 10;
    }
    return getSuperDigit(sum); 
}

int superDigit(string n, int k) {
    
    long long number = 0; 
    for(char c:n){
        number += (c-'0');
    }
    number *=k; 
    
    return getSuperDigit(number); 

}