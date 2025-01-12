#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'maxSubarray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> maxSubarray(vector<int> arr) {
    
    int maxSubarraySum = INT_MIN; 
    
    int currentSum = 0; 
    
    int maxSubSequenceSum = 0; 
    int currentSubSequenceSum = 0; 
    int maxNegNumber = INT_MIN; 
    bool hasPos = false; 
    
    for(int num:arr){
        //max sum array 
        currentSum += num; 
        maxSubarraySum = max(maxSubarraySum, currentSum); 
        if(currentSum<0){
            currentSum = 0; 
        }
        
        //max sub sequence
        if(num>0){
            currentSubSequenceSum += num; 
            hasPos=true; 
        }
        
        maxNegNumber = max(maxNegNumber, num); 
        
    }
    
    if(hasPos){
        maxSubSequenceSum = currentSubSequenceSum; 
    }else{
        maxSubSequenceSum = maxNegNumber; 
    }
    
    vector<int>answer; 
    answer.push_back(maxSubarraySum); 
    answer.push_back(maxSubSequenceSum);
    return answer; 
}