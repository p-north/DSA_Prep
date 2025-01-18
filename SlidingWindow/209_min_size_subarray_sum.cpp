#include<bits/stdc++.h>
using namespace std;


 int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        if(n == 1){
            if(nums[0] > target){
                return n;
            }
            else{
                return 0;
            }
        }

        // sliding window technique (variable-window)
        int i = 0;
        int j = 0;
        int minLength = INT_MAX;
        int sum = 0;

        while(j<n){
            // count sum as j increases
            sum += nums[j];
            // condition matched
            // keep on shortening window while sum>=target
            while(sum >= target){
                minLength = min(j-i+1, minLength);
                sum -= nums[i];
                i++;
                
            }
            // increment ptr
            j++;
            

        }

        // return the min length if found valid subarray
        if(minLength == INT_MAX){
            return 0;
        }
        else{
            return minLength;
        }

        
}

int main()
{
 
    return 0;
}