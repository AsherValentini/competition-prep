#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int q; 
    cin >> q; // number of ops 
    string S = ""; 
    vector<string>sStack; 
    for(int i=0; i<q; i++){
        int command; 
        cin >> command; 
        if(command == 1){//case one append w to s 
            string W; 
            cin >> W; 
            if(sStack.empty()){
                S += W;  
                sStack.push_back(S);  
            }else{
                S = sStack.back(); 
                S +=W; 
                sStack.push_back(S);
            }
            
        }else if(command ==2){// delete the last k characters from s 
            if(!sStack.empty()){
                int deleteLength; 
                cin>>deleteLength; 
                S = sStack.back(); 
                S = S.substr(0, S.length()-deleteLength);
                sStack.push_back(S);
            }
            
        }else if(command ==3){// print the kth element of s 
            int index; 
            cin >> index; 
            S = sStack.back(); 
            index = index -1; //get back to zero based index 
            cout << S[index]<<endl; 
        }else if(command ==4){//unod the op of type 1 or 2 

            if(!sStack.empty()){
                sStack.pop_back(); 
                if(sStack.empty()){
                    S = ""; 
                }else{
                    S = sStack.back();
                }
            }
        }     
    }
    
    return 0;
}