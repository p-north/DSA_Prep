#include<bits/stdc++.h>
using namespace std;


class KthLargest {
public: 
    // min heap (optimized)
    priority_queue<int, vector<int>, greater<int>> pq;
    int kth;

    KthLargest(int k, vector<int>& nums) {
        // initializes the object with the integer k and the stream of test scores nums
        kth = k;
        // iterate through nums, adding to pq   
        for(auto& val: nums){
            pq.push(val);
            if(pq.size() > k){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        // adds a new test score "val" to the stream and return kth largest element in pool of test scores so far
        pq.push(val);
        if(pq.size() >kth){
            pq.pop();
        }
        int result = pq.top();
        return result;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

int main()
{
    /*
        Level: Easy
        Problem: You are tasked to implement a class which, for a given integer k, maintains a stream of test scores and continuously returns the kth highest test score after a new score has been submitted. More specifically, we are looking for the kth highest score in the sorted list of all scores.
        Link: https://leetcode.com/problems/kth-largest-element-in-a-stream/description/

    */
 
    return 0;
}