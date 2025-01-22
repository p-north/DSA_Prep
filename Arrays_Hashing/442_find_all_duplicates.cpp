#include<iostream>
using namespace std;


//Brute force hashmap solution
 vector<int> findDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return nums;
        }
        if(nums.size() == 1){
            return {};
        }
        unordered_map<int, int> ump;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            ump[nums[i]]++;
        }
        vector<int> res;
        for(auto & val: ump){
            if(val.second > 1){
                res.push_back(val.first);
            }

        }

        return res;
        
}

int main()
{
    /*
        Level; Medium
        Problem: Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.
        Link: https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

    */
 
    return 0;
}