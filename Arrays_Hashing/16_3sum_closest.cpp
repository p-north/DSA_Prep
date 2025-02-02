#include<bits/stdc++.h>
using namespace std;

// Two pointer solution
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // find out the sum that is closes to the target
        int closest = nums[0]+nums[1]+nums[2];
        bool isNegative = false;
    
        // sort the array
        int n = nums.size();
        // use two pointers to find the sum of 3 ints

        sort(nums.begin(), nums.end());

        for(int i = 0; i<n; i++){
            // check for duplicates
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            // left ptr
            int left = i+1;
            // right ptr
            int right = n-1;
            // use left and right ptrs to check for sum
            while(left < right){
                int value = nums[i] + nums[left] + nums[right];

                // check if current distance to target is less
                if(abs(value-target) < abs(closest-target)){
                    closest = value;
                }
                // move right ptr if value is greater
                if(value > target){
                    right--;
                }
                //if the value is less, move the left ptr
                else{
                    left++;
                }
            }
        }
        

        return closest;
   
    }
};

int main()
{
    /*
        Level: Medium
        Problem: Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target. Return the sum of the three integers.
        Link: https://leetcode.com/problems/3sum-closest/description/


    
    
    */
 
    return 0;
}