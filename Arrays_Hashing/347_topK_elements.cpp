#include<bits/stdc++.h>
using namespace std;


// Brute force solution
vector<int> topKFrequent(vector<int>& nums, int k) {


        // hash map implementation
        int n = nums.size();
        if(n == 1){
            return {1};
        }
        vector<int> res;
        // create map
        map<int, int> mpp;
        // iterate through the array, adding key->value to map
        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
        }

        // sorted vector with mapped vals
        vector<pair<int, int>> sorted(mpp.begin(), mpp.end());
        sort(sorted.begin(), sorted.end(), [](const pair<int, int>& a, const pair<int, int>& b){
            return a.second > b.second;
        });


        // iterate through the vector, adding greatest frequencies until K.
        int count = 1;
        for(int i = 0; i<sorted.size(); i++){
            if(count > k){
                break;
            }
            auto val = sorted[i];
            res.push_back(val.first);
            count++;
        }

        return res;

       
        
}

int main()
{
    /*
        Level: Medium
        Problem: Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.
        Link: https://leetcode.com/problems/top-k-frequent-elements/description/
    */
 
    return 0;
}