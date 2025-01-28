#include<bits/stdc++.h>
using namespace std;


// Optimal O(1) solution
class MinStack {
public:
    // store the min?
    // hashmap?
    vector<int> st;
    // two stacks one regular, one auxillary
    vector<int> minSt;
    MinStack() {
        
    }
    
    void push(int val) {
        // push the value into the array
        st.push_back(val);
        // push back if min stack empty
        if(minSt.empty()){
            minSt.push_back(val);
        }
        // or push back if smaller element
        else if(val <= minSt.back()){
            minSt.push_back(val);
        }
    }
    void pop() {
        // pop the back of the array
        if(minSt.back() == st.back()){
            minSt.pop_back();
        }
        st.pop_back();
    }
    
    int top() {
        // get the back of the array
        int back = st.back();
        return back;
        
    }
    
    int getMin() {
        return minSt.back();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main()
{
    /*
        Level: Medium
        Problem: Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
        Link: https://leetcode.com/problems/min-stack/description/
    
    */
 
    return 0;
}