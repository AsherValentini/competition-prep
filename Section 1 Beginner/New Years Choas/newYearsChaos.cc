#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'minimumBribes' function below.
 *
 * The function accepts INTEGER_ARRAY q as parameter.
 */

void minimumBribes(vector<int> q) {
    
    bool tooChaotic = false; 
    int bribes = 0; 
    //lets first check to see if q is too choatic O(n)
    for(int i=0; i<q.size(); i++){
        //Rule 1: value at index i cannot be larger than two away from an ordered set 
        if((q[i]-(i+1))>2){
            tooChaotic = true; 
            break; 
        }
        for(int j = max(0, q[i]-2); j<i; j++ ){
            if(q[j]>q[i]){
                bribes++; 
            }
        }
    }
    
    //now this is a greedy algo problem so what we want to do is not simulate the whole game 
    //rather lets try and solve this problem by looking locally at all positions i 
   if(tooChaotic)cout << "Too chaotic"<<endl;
   else{
    cout << bribes << endl; 
   }


}