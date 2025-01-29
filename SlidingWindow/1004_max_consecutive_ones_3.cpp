#include<bits/stdc++.h>
using namespace std;



// Optimal solution
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // sliding window approach
        // return the maximum number consescutive ones subarray, where k0s can be flipped
        int n = nums.size();
        // store the max length
        int maxLength = 0;
        int zeroes = 0;
        int i=0;
        int j =0;
        while(j<n){
            // if j reaches 0, icnrement i to the next zero and dec zeroes
            if(nums[j] == 0){
                zeroes++;
                while(zeroes>k){
                    if(nums[i] == 0){
                        zeroes--;
                    }
                    i++;
                }
            }
            // check for max length
            if((j-i+1)>maxLength && zeroes <= k){
                maxLength = j-i+1;
            }
            //increment j
            j++;
        }


        return maxLength;
        
    }
};
int main()
{
    /*
        Level: Medium
        Problem: Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
        Link: https://leetcode.com/problems/max-consecutive-ones-iii/description/
    */
 
    return 0;
}