#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_map<int, bool> mpp;
        int n = nums.size();
        if(n == 1){
            return 1;
        }
        if(n == 0){
            return 0;
        }

        for(int i = 0; i<n; i++){
            int val = nums[i];
            mpp[val] = false;
        }

        for(auto num : nums){
            int curr = 1;
            int nextNum = num+1;
            while((mpp.find(nextNum) != mpp.end()) && mpp[nextNum] == false){
                curr++;
                mpp[nextNum] = true;

                // move to next number
                nextNum++;

            }

            // check in reverse direction
            int prevNum = num-1;
            while((mpp.find(prevNum) != mpp.end() &&  mpp[prevNum] == false)){
                curr++;
                mpp[prevNum] = true;
                prevNum--;
            }

            longest = max(longest, curr);


        }

        return longest;
      

int main()
{
    
 
    return 0;
}