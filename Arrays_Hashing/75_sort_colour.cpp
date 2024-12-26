#include<bits/stdc++.h>
using namespace std;

// brute force solution
void sortColors(vector<int>& nums) {
        // bubble sort
        int n = nums.size();
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(nums[j] < nums[i]){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        
}

int main()
{
    /*
        Level: Medium
        Link: https://leetcode.com/problems/sort-colors/description/
        Problem: Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue. We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
    */
 
    return 0;
}