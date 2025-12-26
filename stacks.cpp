#include<bits/stdc++.h>
using namespace std;


// EASY
// Valid parantheses
// Given a string s, containning chars brackets, determine if input string is valid
// An input string is valid if:
// Open brackets must be closed by the same type of brackets
// Open brakcets must be closed in the correct order
// Every close bracket has a corresponding open bracket of the same type
bool isValid(string s){
    int n =s.size();
    // stack implementation
    // edge case
    if(n==1){
        return false;
    }
    stack<int> st;
    for(auto ch: s){
        // if opening bracket, add to stack
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        // if closing bracket, check top of stack for matching opening bracket at the top
        else if (ch == '}' || ch == ')' || ch == ']' && !st.empty())
        {
            char top = st.top();
            if(ch == '}' && top != '{'){
                return false;
            }
            else if (ch == ')' && top != '(')
            {
                return false;
            }
            else if (ch == ']' && top != '[')
            {
                return false;
                /* code */
            }
            st.pop();
        }
        
        
    }

    if(!st.empty()){
        return false;
    }



    return true;
}

// MEDIUM:
// Design a stack the supposrs push, pop, top and retreiving the minimunm element in constant time.
class MinStack {
public:
    // main stack
    vector<int> st;
    // auxillary stack
    vector<int> minSt;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
        if(minSt.size() == 0){
            minSt.push_back(val);
        }
        else if(val<=minSt.back()){
            minSt.push_back(val);
        }
    }
    
    void pop() {
        // removes element on the top of stack
        if(st.back() == minSt.back()){
            minSt.pop_back();
        }
        st.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return minSt.back();
    }
};

// MEDIUM
// Reverse polish notation
// Given an array of strings tokens tahts represents an arithmetic expression in Reverse polish notation.
// Evaluate the expression and return an itneger that represents the value of the expression.

int mul(int a, int b){
    return a*b;
}
int add(int a, int b){
    return a+b;
}
int divi(int a, int b){
    return a/b;
}
int sub(int a, int b){
    return a-b;
}

int evalRPN(vector<string>& tokens){
    // stack implementation
    int n = tokens.size();
    stack<int> st;
    for(auto ch:tokens){
        // if it is valid operators, pop two numbers from stack, and perform operation, push back to stack
        if(ch == "+"){
            int top1 = st.top();
            st.pop();
            int top2= st.top();
            st.pop();
            int res = add(top1, top2);
            st.push(res);
        }
        else if (ch == "-")
        {
            int top1 = st.top();
            st.pop();
            int top2= st.top();
            st.pop();
            // ! change order if needed here
            int res = sub(top1, top2);
            st.push(res);
        }
        else if (ch == "*")
        {
            int top1 = st.top();
            st.pop();
            int top2= st.top();
            st.pop();
            int res = mul(top1, top2);
            st.push(res);
        }
        else if (ch == "/")
        {
            int top1 = st.top();
            st.pop();
            int top2= st.top();
            st.pop();
            int res = divi(top2, top1);
            st.push(res);
        }
        // else it is number, fill up the stack
        else{
            int val = stoi(ch);
            st.push(val);
        }
    }

    // last remaining number would be the answer
    int top = st.top();
    st.pop();
    return top;
}

// MEDIUM
// Daily temperatures
// Given an array of integers temperatures, represents daily tempratures, return an array such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day, keep answer[i]==0
vector<int> dailyTemperatures(vector<int>& temperatures){
    int n = temperatures.size();
    vector<int> ans (n, 0);
    stack<int> st;

    for(int i = 0; i<n; i++){
        int val = temperatures[i];
        while(!st.empty() && val>temperatures[st.top()]){
            int top = st.top();
            int diff = abs(i-top);
            ans[top] = diff;
            st.pop();

        }
        st.push(i);
    }

    return ans;



}






int main(){




}