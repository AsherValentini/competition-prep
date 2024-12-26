#include <bits/stdc++.h>
#include <string>

using namespace std;
/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    
    string am_pm = s.substr(s.length()-2, 2); //get the noon or dawn tag 
    string milit_time = s.substr(0, s.length()-2); //remove the noon/dawn tag from final answers
    string str_hours = s.substr(0, 2); //create string to hold the hours for math operations later
    int int_hours = 0; //create the int to hold the hours for math operations later
    
    if (am_pm == "AM")
    {
        
        if(s.substr(0,2)== "12")
        {
            milit_time[0]= '0'; 
            milit_time[1]= '0'; 
        }
        
        return milit_time; 
    }
    else if(am_pm=="PM")
    {
        if (str_hours != "12")
        {
          int_hours = stoi(str_hours) + 12; //convert the string for hours to int for math
          str_hours = to_string(int_hours); //convert back to string to be inserted in answer
        }
        
        milit_time.replace(0, 2, str_hours); 
        return milit_time; 
    }

    return milit_time; 
    

}
