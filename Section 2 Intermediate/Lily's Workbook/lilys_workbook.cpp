#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'workbook' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY arr
 */

int workbook(int n, int k, vector<int> arr) {
    //initialize 
    int currentPage =1; 
    int specialProblems = 0; 
    //loop through the chapters
    for(int i=0; i<n; i++){
        
        int problems = arr[i]; 
        
        //loop through pages and see if they match to a problem number
        for(int problems_start=1; problems_start<=problems; problems_start+=k){
            
            int problems_end = min(problems_start+k-1, problems); 
            
            for(int problem = problems_start; problem<=problems_end; problem++){
                
                if(problem == currentPage)
                    specialProblems++; 
            }
            currentPage++; 
        } 
        
    } 
    
    return specialProblems; 
    
}