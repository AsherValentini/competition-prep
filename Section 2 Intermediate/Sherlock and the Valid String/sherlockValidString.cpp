#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isValid(string s) {
    
    vector<int>freq(26, 0); //frequency array to hold count of each letter 
    
    //populate the frequency array 
    for(char c:s){
        freq[c-'a']++; 
    }
    
    unordered_map<int, int> freqFreq; 
    
    for(int frequency:freq){
        if(frequency>0)
            freqFreq[frequency]++; 
    }

    
    if (freqFreq.size() == 1)
        return "YES"; 
        
    auto it = freqFreq.begin(); 

    if(freqFreq.size()==2){
        
        int freq1 = it->first; 
        int count1 = it->second; 
        it++;
        int freq2 = it->first, count2 = it->second; 
        
        // Case 1: One frequency is 1 and appears once
        if ((freq1 == 1 && count1 == 1) || (freq2 == 1 && count2 == 1)) return "YES";

        // Case 2: The difference between frequencies is 1, and the larger frequency occurs once
        if (abs(freq1 - freq2) == 1 && (count1 == 1 || count2 == 1)) return "YES";
     
        
        
    }
    
    return "NO"; 
    
    

}