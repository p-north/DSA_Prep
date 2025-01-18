#include<bits/stdc++.h>
using namespace std;


// optimal sliding window technique solution
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n = nums.size();
        // handle edge case
        if(n == 1)
        {
            double val = nums[0];
            return val;
        }


        // sliding window technique
        int i, j = 0;
        // store max
        double currMax = 0.0;
        double sum = 0.0;
        while(j<n){
            sum += nums[j];
            // if window small, increment size to match k
            if((j-i+1) < k){
                j++;
            }
            // when window is k sized, compute
            else if( (j-i+1) == k){
                //compute average
                double avg = sum/k;
                // store max average
                currMax = max(avg, currMax);
                // move the window over
                sum -= nums[i];
                i++;
                j++;
            
            }

        }

        return currMax;
        
    }
};


int main()
{
    /*
        Level: Easy
        Problem: You are given an integer array nums consisting of n elements, and an integer k. Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.
        Link: https://leetcode.com/problems/maximum-average-subarray-i/description/
        
    
    
    */
 
    return 0;
}