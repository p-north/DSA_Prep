#include<bits/stdc++.h>
using namespace std;
// binary search code
int search(vector<int>& nums, int target) {
        // binary search
        int n = nums.size();

        int low = 0;
        int high = n-1;
        while(low <= high){
            // find mid
            int mid = (low+high)/2;
            // return case
            if(nums[mid] == target){
                return mid;
            }
            // move high ptr if target smaller
            else if(nums[mid] > target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }   
        
        // return -1, if not found
        return -1;
}

int main()
{
    /*
        Level: Easy
        Problem: Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1. You must write an algorithm with O(log n) runtime complexity.
        Link: https://leetcode.com/problems/binary-search/description/
    
    */
 
    return 0;
}