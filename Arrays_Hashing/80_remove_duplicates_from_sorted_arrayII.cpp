#include<bits/stdc++.h>
using namespace std;

//Optimal hashmap approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //nums = [1,1]
        // remove duplicates in place such that the're is only two for each
        vector<int> res;
        map<int, int> mpp;

        // iterate through nums adding frequencies, only upto 2.
        for(auto val:nums){
            // value found
            if(mpp.find(val) != mpp.end()){ //mpp ={}
                // if freq == 2 continue
                if(mpp[val] == 2){
                    continue;
                }
                // else update freq
                else if(mpp[val] < 2){
                    mpp[val]++; // nums]{1->2}
                }
            }
            else{
                mpp[val]++; // map={1->1}
            }
        }
        

        // replace nums with numbers in map, as it is sorted anyways
        for(auto val:mpp){
            int key = val.first;
            int freq = val.second;
            for(int j = 0; j<freq; j++){
                res.push_back(key); // {1,1}
            }
        }
        // get size of res, to return after
        int resSize = res.size();
        while(res.size() < nums.size()){
            res.push_back(0);
        }
        nums = res;
        return resSize;

    
        
    }
};

int main()
{
    /*
        Level: Medium
        Problem: Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same. Return k after placing the final result in the first k slots of nums.
        Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/
    */
 
    return 0;
}