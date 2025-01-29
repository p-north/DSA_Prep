#include<bits/stdc++.h>
using namespace std;

// Suboptimal solution

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // Hash map implmentation

        int n = strs.size();
        vector<vector<string>> result;
        unordered_map<string, vector<string>> ump;

        // iterate over the array, sort each string, add to relevant hash map
        // O(m) m =size of array
        for(auto s: strs){
            string tempSort = s;
            // temp sort since sort function sorts the string by reference not value
            // O(nlogn)
            sort(tempSort.begin(), tempSort.end());

            // map sorted string on hashmap
            ump[tempSort].push_back(s);
        }

        //O(n)
        // add final arrays of strings to result vector
        for(auto vecString : ump){
            result.push_back(vecString.second);
        }


        // Time comp worst-case = O(m*nlogn)




        return result;

        
    }
};

int main()
{
    /*
        Level: Medium
        Problem: Given an array of strings strs, group the anagrams together. You can return the answer in any order.
        Link: https://leetcode.com/problems/group-anagrams/description/

 
    
    */
 
    return 0;
}