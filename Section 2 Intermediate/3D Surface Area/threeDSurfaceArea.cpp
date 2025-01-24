#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'surfaceArea' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY A as parameter.
 */

int surfaceArea(vector<vector<int>> A) {
    
    //perhaps run a sim on each cube...
    
    int totalCost=0;
    int columnCost = 0; 
    
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[i].size(); j++){
            
            columnCost = (4*A[i][j])+2; 
            
            //j+1 in bounds 
            if(j+1 < A[i].size()){
                columnCost = columnCost - min(A[i][j+1], A[i][j]); 
            }
            //i+1 in counds 
            if(i+1<A.size()){
                columnCost = columnCost - min(A[i+1][j], A[i][j]); 
            }
            //i-1 in bounds 
            if(i-1>=0){
                columnCost = columnCost -min(A[i-1][j], A[i][j]); 
            }
            //j-1 in bounds
            if(j-1>=0){
                columnCost = columnCost -min(A[i][j-1], A[i][j]); 
            }
            
            totalCost += columnCost;  
        }
 
    }
    
    return totalCost; 

}