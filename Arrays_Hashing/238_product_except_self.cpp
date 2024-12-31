#include<bits/stdc++.h>
using namespace std;

// optimal prefix/sufix solution
vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        int left [n];
        int right [n];

        // iterate through nums, adding left product of each nums[i]
        left[0] = 1;
        for(int i = 1; i<n; i++){
            left[i] = left[i-1] * nums[i-1];
        }

        // iterate through nums, adding right product of each nums[i]
        right[n-1] = 1;
        for(int i = n-2; i>=0; i--){
            right[i] = right[i+1] * nums[i+1];
        }

        // iterate through nums, adding product of both left and right array
        for(int i = 0; i<n; i++){
            int val = left[i] * right[i];
            ans.push_back(val);
        }


        return ans;

        
}

int main()
{
    /*
        Level: Medium

        Problem: Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

        Approach: Using the prefix/sufix appraoch, create two ararys of size n, one for left elements one for right. Iterate through nums, adding product of left elements to left[i]. Repeat for right array, adding products of right elements to right[i].

        Link: https://leetcode.com/problems/product-of-array-except-self/description/

    */
 
    return 0;
}