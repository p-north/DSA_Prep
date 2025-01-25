#include<bits/stdc++.h>
using namespace std;


// Optimal Stack Solution
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();

        vector<int> ans(n,0);
        stack<int> st;

        // 30 <= temperatures[i] <= 100
        // Brute force?
    
        for(int i = 0; i<n; i++){
            // get the current value
            int val = temperatures[i];
            // if current val is greater than one in top of stack, push it to results
            while(!st.empty() && val > temperatures[st.top()]){
                int top = st.top();
                int diff = abs(i-top);
                ans[top] = diff;
                st.pop();

            }
            // push the current val into stack
            st.push(i);

            

            
        }

        return ans;


        
        
    }
};

int main()
{

    /*
        Level: Medium
        Problem: Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.
        Link: https://leetcode.com/problems/daily-temperatures/description/
    
    */
 
    return 0;
}