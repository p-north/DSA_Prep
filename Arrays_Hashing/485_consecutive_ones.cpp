#include<bits/stdc++.h>
using namespace std;

// solution
int findMaxConsecutiveOnes(vector<int>& nums) {
        // count and max approach
        int count = 0;
        int max = 0;
        // iterate over the array
        for(int i = 0; i<nums.size(); i++){
            // if 1, increment the count
            if(nums[i] == 1){
                count++;
                if(count > max){
                    max++;
                }
            }
            // if 0, reset count. Preserving max
            else{
                count = 0;
            }

        }

        // return max count
        return max;

        
    }

int main()
{
    /*
        Level: Easy
        Link: https://leetcode.com/problems/max-consecutive-ones/description/
        Problem: Given a binary array nums, return the maximum number of consecutive 1's in the array.
    
    */
 
    return 0;
}