#include<bits/stdc++.h>
using namespace std;

// optimal two pointer approach
// required assistance for edge cases, main approach was fine
 vector<vector<int>> threeSum(vector<int>& nums) {
        // result vector
        vector<vector<int>> res;
        int target = 0;
        // sort the vector for efficenicy in approach
        sort(nums.begin(), nums.end());
        int n = nums.size();
        // two pointer approach

        // iterate and capture a fixed ith element
        for(int i = 0; i<n; i++){
            // if ith element > 0, break immietly, all other elements will also be greater due to sorting.
            if(nums[i]>0){
                break;
            }
            // if ith is a duplicate of prev, go to next one
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            // left pointer
            int left = i+1;
            // right pointer
            int right = n-1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                // check for sum
                if(sum == target){
                    res.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    // check for duplicate left element
                    while(left<right && nums[left] == nums[left-1]){
                        left++;
                    }
                }
                // if sum lower, increment left pointer
                else if(sum < target){
                    left++;
                }
                // sum higher decrement right pointer
                else{
                    right--;
                }
            }           
        }


        // return output array
        return res;

        
        
        
    }

int main()
{

    /*
        Level: Medium
        Problem: https://leetcode.com/problems/3sum/description/
        Link: https://leetcode.com/problems/3sum/description/

    */
 
    return 0;
}