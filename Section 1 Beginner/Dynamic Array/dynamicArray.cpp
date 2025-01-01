#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'dynamicArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    
    
    vector<vector<int>> arr(n); 
    vector<int>answers; 
    
    int lastAnswer =0; 
    
    for(vector query:queries){
        int x = query[1]; 
        int y = query[2];
        
        if(query[0]==1){
            cout << "in case 1"<<endl; 
            int idx = (x^lastAnswer)%n; 
            arr[idx].push_back(y); 
            
        }else{
            cout << "in case 2"<<endl; 

            int idx = (x^lastAnswer)%n; 
            lastAnswer = arr[idx][y%arr[idx].size()];
            answers.push_back(lastAnswer);
        }
    }
    
    return answers; 

}