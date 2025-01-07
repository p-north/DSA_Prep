#include<bits/stdc++.h>
using namespace std;

// optimal solution
int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[n-1];
        }
        if(n==2){
            return min(nums[0], nums[1]);
        }
        // get rid of the edge cases first hand, to save additional if statements in search
        if(nums[0] != nums[1]){
            return nums[0];
        }
        if(nums[n-1] != nums[n-2]){
            return nums[n-1];
        }
        // perform binary search
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid-1] != nums[mid] && nums[mid+1] != nums[mid]){
                return nums[mid];
            }
            // (even, odd) -> element on right half
            // first case standing on odd, check behind
            // second case standing on even, check front
            else if((mid % 2 != 0 && nums[mid-1] == nums[mid]) || (mid % 2 == 0 && nums[mid+1] == nums[mid])){
                low = mid+1;
            }
            // (odd, even) => element on left half
            // first case standing on even check behind
            // second case, standing on odd, check front
            else if((mid % 2 == 0 && nums[mid-1] == nums[mid]) || (mid % 2 != 0 && nums[mid+1] == nums[mid])){
                high = mid-1;
            }
        }
        // will never return this as guranteed a unique element.
        return -1;

        
 }

int main()
{
    /*
        Level: Medium
        Problem: You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Return the single element that appears only once.
        Link: https://leetcode.com/problems/single-element-in-a-sorted-array/description/
         
    */
 
    return 0;
}