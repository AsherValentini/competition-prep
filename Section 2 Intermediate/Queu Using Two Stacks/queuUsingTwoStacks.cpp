#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int q; //number of queries  
    cin >> q; //first line is the number of queries and goes into our q variable
    
    vector<int> inStack; 
    vector<int> outStack; 
    
    for(int i = 0; i < q; i++){
        int query; 
        cin >> query; 
        if(query==1){ //enqueue operation 
            int enqueuValue; 
            cin >> enqueuValue; 
            inStack.push_back(enqueuValue); 
            
        }else if(query==2){ //dequeu operation 
            
            if(outStack.empty()){
                while(!inStack.empty()){
                    outStack.push_back(inStack.back());
                    inStack.pop_back();
                }
            }
            if(!outStack.empty()){
                outStack.pop_back(); 
            }
            
        }else if(query==3){ //print front operation
            
            if(outStack.empty()){
                while(!inStack.empty()){
                    outStack.push_back(inStack.back()); 
                    inStack.pop_back(); 
                }
            }
            if(!outStack.empty()){
                cout << outStack.back() <<endl;
            }
        }
    }
    return 0;
}
