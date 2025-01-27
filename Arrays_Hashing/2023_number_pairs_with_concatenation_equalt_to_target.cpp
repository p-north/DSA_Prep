#include<bits/stdc++.h>
using namespace std;


//Brute force solution
class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n = nums.size();

        // Brute force
        // Two nested loops, i and j.
        int count = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(i != j && nums[i]+nums[j] == target){
                    count++;
                }
            }
        }


        return count;


    }
};

int main()
{
    /*
        Level: Medium
        Problem: Given an array of digit strings nums and a digit string target, return the number of pairs of indices (i, j) (where i != j) such that the concatenation of nums[i] + nums[j] equals target.
        Link: https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/description/
    
    
    */
 
    return 0;
}