#include<bits/stdc++.h>
using namespace std;


// Optimal set solution
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        // edge cases
        // [1,5,0,3,5]
        int n = nums.size();
        if(n == 1 && nums[n-1] == 0){
            return 0;
        }
        if(n == 2 && nums[n-1] == 0 && nums[n-2] == 0){
            return 0;
        }

        // set implementation, unique values only
        set<int> st;
        for(auto val: nums){
            if(val != 0){
                st.insert(val);
            }
        }
        
        return st.size();
    

        
    }
};
int main()
{
    /*
        Level: Easy
        Problem: Return the minimum number of operations to make every element in nums equal to 0.
        Link: https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/description/?envType=problem-list-v2&envId=7p5x763
    */
 
    return 0;
}