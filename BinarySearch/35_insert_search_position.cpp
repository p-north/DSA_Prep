#include<bits/stdc++.h>
using namespace std;

// solution (O(log n))
int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        // proper binary search first
        int low = 0;
        int high = n-1;
       
        while(low < high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        // if target doesn't exist in the array, look for best position
        // modified version of binary search
        int low2 = 0;
        int high2= n-1;
        int ans = n;
        while(low2<=high2){
            int mid = (low2+high2)/2;
            // if answer
            if(nums[mid] >= target){
                ans = mid;
                high2 = mid-1;
            }
            else{
                low2 = mid+1;
            }
        }

        return ans;


       
        
    }
int main()
{
    /*
        Level: Easy
        Problem: Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order. You must write an algorithm with O(log n) runtime complexity.
        Link: https://leetcode.com/problems/search-insert-position/description/

    */
    
 
    return 0;
}