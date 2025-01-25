#include<bits/stdc++.h>
using namespace std;

// Optimal stack solution
class Solution {
public:

    // helper evluation function
    int evaluate(const int a, const string s, const int b){
        if(s=="+"){
            return a+b;
        }
        else if(s=="*"){
            return a*b;
        }
        else if(s=="-"){
            return a-b;
        }
        else{
            return a/b;
        }
    }
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        int result = 0;
        stack<int> st;


        // Stack implementation
        
        // Iterate through tokens, adding numbers to stack
        for(int i = 0; i<n; i++){
            string c = tokens[i];
            if(c=="+" || c=="-" || c=="*" || c=="/"){
                // pop two numbers, compute them based on 
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();
                int res = evaluate(val2, c, val1);
                // push res to stack
                st.push(res);
            }
            // else its integer
            else{
                // convert to integer and push to stack
                int val = stoi(c);
                st.push(val);
            }
        }

        // last remaining will be result, on top of stack
        return st.top();
       
        
        
    }
};

int main()
{
    /*
        Level: Medium
        Problem: You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation. Evaluate the expression. Return an integer that represents the value of the expression.
        Link: https://leetcode.com/problems/evaluate-reverse-polish-notation/description/
    
    */
 
    return 0;
}