#include<bits/stdc++.h>
using namespace std;

// optimal solution
vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        // output vector
        vector<int> res;

        // two pointer approach to take advantage of sorted array
        int left = 0;
        int right = n-1;
        while(left<right){

            int val = numbers[left] + numbers[right];
            // if value is target, break
            if(val == target){
                res.push_back(left+1);
                res.push_back(right+1);
                break;
            }
            // if value is too big, decrement right pointer
            else if(val > target){
                right--;
            }
            // if value too small increase left pointer
            else{
                left++;
            }
        }

        return res;
    

    
        
}

int main()
{

    /*
        Level: Medium
        Problem: Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
        Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
    
    
    */
 
    return 0;
}