#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'waiter' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY number
 *  2. INTEGER q
 */
 

vector<int> waiter(vector<int> number, int q) {
    
    //so we need an array of possible primes to find the ith prime
    vector<int>primes; 
    int num = 2; 
    while(primes.size()<q){
        bool isPrime = true; 
        for(int i = 2; i<=sqrt(num); i++){
            if(num%i == 0){
                isPrime = false; 
                break; 
            }
        }
        if(isPrime) primes.push_back(num); 
        ++num; 
    }
    //now we have an array primes that hold all the primes between 2 and the number of its 
    //little bit frustrating that we had to do this but no ways im declaring an array of all the primes 
    //between 0 and 1200 by hand
    
    //declare the answers array 
    vector<int>answers; 
    
    //we need two stacks to solve this number and nextStack 
    vector<int>currentStack = number; 
    vector<int>stackAi; 
    
    //now iterate and simulate the ops 
    for(int i=0; i<q; i++){
        vector<int> stackBi; 
        stackAi.clear(); 
        
        while(!currentStack.empty()){
            int plateNumber = currentStack.back(); 
            currentStack.pop_back(); 
            
            if(plateNumber %primes[i] == 0){
                stackBi.push_back(plateNumber); 
            }else{
                stackAi.push_back(plateNumber); 
            }
        }
        while(!stackBi.empty()){
            answers.push_back(stackBi.back()); 
            stackBi.pop_back(); 
        }
        currentStack = stackAi; 
    }
    while(!currentStack.empty()){
        answers.push_back(currentStack.back()); 
        currentStack.pop_back(); 
    }
    
    return answers; 
    
}