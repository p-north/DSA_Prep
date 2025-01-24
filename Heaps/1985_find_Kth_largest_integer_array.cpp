#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    struct CompareLength {
        // custom operator for min heap
    bool operator()(const string &a, const string &b) {
        if(a.length() != b.length()){return a.length() < b.length();}
        return a<b;
    }
};
    string kthLargestNumber(vector<string>& nums, int k) {
        /*
            --Priority queue?/min heap?
        
        
        */

        //iterate through vec, converting string to int, add to pq
        int n = nums.size();
        // min heap priority queue to store all strings
        priority_queue<string, vector<string>, CompareLength> pq;
        // iterate through vector, inserting each string
        for(auto string : nums){
            pq.push(string);
        }

        //iterate through pq, stopping at the kth largest element.
        int idx = 0;
        while(!pq.empty()){
            string val = pq.top();
            if(idx == k-1){
                break;
            }
            else{
                pq.pop();
                idx++;
            }

        }

        return pq.top();
        
    }
};

int main()
{
    /*
        Level: Medium
        Problem: You are given an array of strings nums and an integer k. Each string in nums represents an integer without leading zeros. Return the string that represents the kth largest integer in nums.
        Link: https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/description/?envType=problem-list-v2&envId=divide-and-conquer
        

 
    
    */
 
    return 0;
}