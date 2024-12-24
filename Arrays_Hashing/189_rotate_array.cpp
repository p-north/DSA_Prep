#include<bits/stdc++.h>
using namespace std;

// brute force solution - O(N) time
void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
    

        // create temp array
        vector<int> temp(k);
        int i = n-k;
        int j = 0;
        while(i<n){
            temp[j] = nums[i];
            j++;
            i++;

        }

        // shifting
        for(int i = n - 1 - k; i>=0; i--){
            nums[i+k] = nums[i];
        }

  
        // put temp array back
        for(int i = 0; i<k; i++){
            nums[i] = temp[i];
        }


        
}

int main()
{
    /*
        Link: https://leetcode.com/problems/rotate-array/
        Problem: Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
    
    
    */
    
}
