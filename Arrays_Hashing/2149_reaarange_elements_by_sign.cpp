#include<bits/stdc++.h>
using namespace std;


// Brute force method: 1st attempt
vector<int> rearrangeArray(vector<int>& nums) {

        // break it into two arrays
        queue<int> pos;
        queue<int> neg;

        // postive and negative
        int n = nums.size();
        for(int i = 0; i<n; i++){
           int val = nums[i];
            if(val > 0){
                pos.push(val);
            }
            else{
                neg.push(val);
            }
        }

        // clear the vector
        nums.clear();

        // keep on pushing into num while not empty
        
        while(true){
            // condition to check whether rearangement complete
            if(nums.size() == n){
                break;
            }



            // get the front values of each queue
            int posVal = pos.front();
            int negVal = neg.front();

            // change the nums
            nums.push_back(posVal);
            nums.push_back(negVal);

            if(!pos.empty()){
                pos.pop();
            }

            if(!neg.empty()){
                neg.pop();
            }
        }


     return nums;

      
}

// optimized solution
vector<int> rearrangeArrayOptimized(vector<int>& nums) {
        int n = nums.size();

        // store the result
        vector<int> result(n,0);

        // store indices
        int posIdx = 0;
        int negIdx = 1;
        // iterate over the array
        for(int i = 0; i<n; i++){
            if(nums[i] < 0){
                result[negIdx] = nums[i];
                negIdx += 2;
            }
            else{
                result[posIdx] = nums[i];
                posIdx+=2;

            }
        }
        
        return result;
}

int main()
{
    /*
        Problem: You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.
        You should return the array of nums such that the the array follows the given conditions:
        Every consecutive pair of integers have opposite signs.For all integers with the same sign, the order in which they were present in nums is preserved.The rearranged array begins with a positive integer.Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

        Level: Medium

        Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
    
    */



   
 
    return 0;
}