#include<bits/stdc++.h>
using namespace std;

// Hashmap solution (refer to ques 350 for details)
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mpp;
        vector<int> res = {};
        for(int i=0; i<nums1.size(); i++){
            mpp[nums1[i]]++;
        }
        for(int i = 0; i<nums2.size(); i++){
            if(mpp.find(nums2[i]) != mpp.end()){
                res.push_back(nums2[i]);
                mpp.erase(nums2[i]);
            }

        }

        return res;
        
}
int main()
{
    /*
        Level: Easy
        Problem: Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
        Link: https://leetcode.com/problems/intersection-of-two-arrays/description/

    */
 
    return 0;
}