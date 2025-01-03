#include<bits/stdc++.h>
using namespace std;
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // pointer approach
        // the intuition is to have smaller elements in nums1 and larger elements in nums2
        int ptr = m-1;
        int ptr2 = 0;

        // iterate with both pointers
        while(ptr >-1 && ptr2 <n){
            int numsVal = nums1[ptr];
            // if nums1val is less, don't swap
            if(numsVal < nums2[ptr2]){
                ptr--;
                ptr2++;
                continue;
            }
            // if nums1val is greater swap
            else{
                nums1[ptr] = nums2[ptr2];
                nums2[ptr2] = numsVal;
                ptr--;
                ptr2++;
            }
        }

        // sort the arrays now
        sort(nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.begin()+m);


        // iterate through nums2, updating nums1 along
        for(int i = 0; i<n; i++){
            nums1[m+i] = nums2[i];
        }

        
        
}

int main()
{
    /*
        Level: Easy
        Problem: You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively. Merge nums1 and nums2 into a single array sorted in non-decreasing order.
        Link: https://leetcode.com/problems/merge-sorted-array/description/
    */
 
    return 0;
}