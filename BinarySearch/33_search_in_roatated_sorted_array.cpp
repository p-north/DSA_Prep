#include<bits/stdc++.h>
using namespace std;

// optimal solution
int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low =0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            // check for good case
            if(nums[mid] == target){
                return mid;
            }
            // figure out sorted, left or right?
            // case when right half sorted
            else if(nums[low] > nums[mid]){
                // check if target lies in range from mid to high
                //  if true, eliminate left half
                if(nums[mid] <= target && nums[high] >= target){
                    low = mid+1;
                }
                // else eliminate the right half
                else{
                    high = mid-1;
                }
            }
            // case when left half sorted
            else{
                // check if element lies in range low to mid
                // if true, elliminate the right half
                if(nums[low] <= target && nums[mid] >= target){
                    high = mid-1;
                }
                // else eliminate the left half
                else{
                    low = mid+1;
                }
            }

        }
        // not found case
        return -1;

        
}

int main()
{
    /*
        Level: Medium
        Problem: There is an integer array nums sorted in ascending order (with distinct values). Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums. You must write an algorithm with O(log n) runtime complexity.
        Link: https://leetcode.com/problems/search-in-rotated-sorted-array/description/
    
    */
 
    return 0;
}