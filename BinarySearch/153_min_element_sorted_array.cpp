#include<bits/stdc++.h>
using namespace std;

// optimal solution
 int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[n-1];
        }
        if(n == 2){
            return min(nums[0], nums[n-1]);
        }
        int low = 0;
        int high = n-1;
        // do binary search, and automatically land the high and low on the mid.
        // no need to store it from mid.
        while(low<high){
            int mid = (low+high)/2;

            // if right side lower, eliminate the left side
            if(nums[high] < nums[mid]){
               
                low = mid+1;
                
            }
            // else check left side
            else if(nums[high] > nums[mid]){
                
                high = mid; 
                
            }    
        }

        return min(nums[low], nums[high]);   
}

int main()
{
    /*
        Level: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
        Problem: Given the sorted rotated array nums of unique elements, return the minimum element of this array. You must write an algorithm that runs in O(log n) time. 
        Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
    
    */
 

    return 0;
}