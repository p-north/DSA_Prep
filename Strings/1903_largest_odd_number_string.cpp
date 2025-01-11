#include<bits/stdc++.h>
using namespace std;

// optimal solution
string largestOddNumber(string num) {
        int n = num.size();
        for(int i = n-1; i>=0; i--){
            // check for odd
            char c = num[i];
            if((c - '0') % 2 != 0){
                return num.substr(0, i+1);
            }
        }
        // not found case
        return "";
        


        
        
}

int main()
{
    /*
        Level: Easy
        Problem: You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists. A substring is a contiguous sequence of characters within a string.
        Link: https://leetcode.com/problems/largest-odd-number-in-string/description/

 
    
    */
 
    return 0;
}
