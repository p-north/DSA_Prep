#include<bits/stdc++.h>
using namespace std;

// Sliding window approach
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() ==1){
            return nums[nums.size()-1];
        }
        // sliding window approach
        int n=nums.size();

        int i =0;
        int j =0;
        // max sum counter
        int maxSum = INT_MIN;
        // curr sum counter
        int sum = 0;
        // iterate with the window
        while(j<n){
           // calc curr sum
            sum+=nums[j];
            // if sum bigger than maxsum, change maxsum
            if(sum > maxSum){
                maxSum = sum;
            }
            // if sum is negative, reset, and move i
            if(sum < 0){
                sum=0;
                i = j+1;
            }
            j++;
        }

        return maxSum;


    }
};
int main()
{
    /*
        Level: Medium
        Problem: Given an integer array nums, find the subarray with the largest sum, and return its sum.
        Link: https://leetcode.com/problems/maximum-subarray/description/

    */
 
    return 0;
}