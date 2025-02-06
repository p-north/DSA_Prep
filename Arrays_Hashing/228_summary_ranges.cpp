#include<bits/stdc++.h>
using namespace std;


// Optimal Solution
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        // given sorted array nums

        vector<string> result;
        int n = nums.size();
        string temp = "";

        // iterate over the array, looking for ranges in each sequence
        for(int i = 0; i<n; i++){
            // starting point
            long long start = nums[i];
            long long next = start+1;
            // while the next number is equal to one in array, keep on moving i ptr
            while(i!=n-1 && next == nums[i+1]){
                next = next+1;
                i++;
            }
            long long end = nums[i];
            // if found range, add ->
            if(start != end){
                temp.append(to_string(start));
                temp.append("->");
                temp.append(to_string(end));
                result.push_back(temp);
            
            }
            // else found a single num
            else{
                temp.append(to_string(start));
                result.push_back(temp);
               
            }
            // reset temp
            temp ="";
        }

        return result;

    }
};

int main()
{
    /*
        Level: Easy
        Problem: Summary Ranges
        Link: https://leetcode.com/problems/summary-ranges/
    
    
    */
 
    return 0;
}