#include<bits/stdc++.h>
using namespace std;

// solution with hash map
vector<int> twoSum(vector<int>& nums, int target) {

        // hash map 
        // ele, index
        vector<int> res;
        int n = nums.size();
        unordered_map<int, int> ump;

        for(int i = 0; i<n; i++){
            int val = nums[i];
            int difference = target-val;
            if(ump.find(difference) != ump.end()){
                res.push_back(i);
                res.push_back(ump[difference]);
                break;
            }

            ump[nums[i]] = i;
        }

        return res;

        
}

int main()
{
    /*
        Level: Easy
        Link: https://leetcode.com/problems/two-sum/
        Problem: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
    */
 
    return 0;
}