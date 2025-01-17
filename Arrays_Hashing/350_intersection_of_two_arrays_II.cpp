#include<bits/stdc++.h>
using namespace std;

// Optimal hashmap solution
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        // hashmap approach
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> res = {};

        unordered_map<int, int> ump;

        // iterate through the map, adding frequencies of nums1
        for(int i = 0; i<n1; i++){
            ump[nums1[i]]++;
        }

        // iterate through the other array, checking for frequencies
        for(int i = 0; i<n2; i++){
            int val = nums2[i];
            // good condition
            if(ump.find(val) != ump.end()){
                ump[val]--;
                // if the key reaches zero, erase it
                if(ump[val] == 0){
                    ump.erase(val);
                }
                res.push_back(val);
            }
        }

        return res;
        




        
}

int main()
{

    /*
        Level: Easy
        Problem: Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
        Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
    
    */
 
    return 0;
}