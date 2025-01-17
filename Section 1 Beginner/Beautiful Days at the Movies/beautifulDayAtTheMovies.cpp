#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'beautifulDays' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER i
 *  2. INTEGER j
 *  3. INTEGER k
 */
 
 int reverseNumber(int x){
    
    int valueINT = 0; 
    string valueString =""; 
    
    while(x>0){
        
        int temp  = x%10;
        valueINT = valueINT*10 +temp; 
        x=x/10; 
    }
    
    
    return valueINT; 
    
 }

int beautifulDays(int i, int j, int k) {

    int count=0; 
    
    for(int w=i; w<=j; w++){
        if(abs(w-reverseNumber(w))%k == 0)count++; 
    }    
    return count; 

}