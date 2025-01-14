#include<bits/stdc++.h>
using namespace std;

// optimal stack solution
 bool isValid(string s) {
        int n = s.size();
        // early case
        if(n == 1){
            return false;
        }
        // stack
        stack<int> st;
        
        // iterate through string, pushing and checking from stack
        for(int i = 0; i<n; i++){
            char c = s[i];
            // if opening bracket push onto stack
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            }
            // else if closing bracket, check for top of stack to match  
            else if(c == ')' || c=='}' || c == ']'){
                if(st.empty()){
                    return false;
                }
                char top = st.top();
                // if top of stack is the opening bracket of c, pop it off
                if(c == ')' && top == '(' || 
                c == '}' && top == '{'|| c == ']' && top == '['){
                    st.pop();
                }
                // unmatched pair
                else{
                    return false;
                }
            }
            
            
        }

        // make sure stack is fully emptied
        return st.empty();
        
}

int main()
{

    /*
        Level: Easy
        Problem: Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
        Link: https://leetcode.com/problems/valid-parentheses/description/    
    */
 
    return 0;
}