#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'alternate' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
 
 bool isValid(string s){
    
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]){
            return false; 
        }
    }
    
    return true; 
 }
 
 string helper(string s, char c1, char c2){
    
    string stringToTest = ""; 
    
    for(char c:s){
        
        if(c == c1 || c ==c2){
            
            stringToTest.push_back(c); 
        }
    }
    
    return stringToTest; 
 }

int alternate(string s) {

    if(s.size()==1)return 0; 
    
    map<char, int> cFreq; 
    
    for(auto c:s){
        cFreq[c]++; 
    }
    
    int maximum = 0; 

 
    for(auto entry:cFreq){
        
        for(auto entry2:cFreq){
            if(entry.first != entry2.first){
                string sPrime = helper(s, entry.first, entry2.first);

                if(isValid(sPrime)){ 
                    cout << entry.first << " " << entry2.first <<endl; 
                    maximum = max(maximum, (entry.second+entry2.second)); 
                    cout << maximum << endl; 
                }
            }
        }
              
    }
    
    return maximum; 

}