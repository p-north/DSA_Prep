#include<bits/stdc++.h>
using namespace std;


// my brute force solution
 vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int n = nums.size();
        if(n == 0){
            return {-1, -1};
        }
        // first occurence search, only searching for left most variable
        // sloghtly optimized version of binary search
        int low = 0;
        int high = n-1;
        int leftMost = -1;
        // iterate till low <= high
        while(low<=high){
            int mid = (low+high)/2;
            // if the target found, find the leftmost, given sorted trait of array.
            if(nums[mid] == target){
                leftMost = mid;
                high = mid-1;
            }
            // binary search else cases
            else if(nums[mid] > target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }

        }
        // similiar to leftmost search, except no goes the opposite direction to look for rightMost
        int low2 = 0;
        int high2 = n-1;
        int rightMost = -1;
        // iterate till low2 <= high2
        while(low2<=high2){
            int mid = (low2+high2)/2;
            // if the target found, find the rightMost, given sorted trait of array.
            if(nums[mid] == target){
                rightMost = mid;
                low2 = mid+1;
            }
            else if(nums[mid] > target){
                high2 = mid-1;
            }
            else{
                low2 = mid+1;
            }
        }

        // push_back and return the resultant vector
        res.push_back(leftMost);
        res.push_back(rightMost);
        return res;


        
}
int main()
{
    /*
        Level: Medium
        Problem: Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value. If target is not found in the array, return [-1, -1]. You must write an algorithm with O(log n) runtime complexity.
        Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

    */
    
 
    return 0;
}