#include<bits/stdc++.h>
using namespace std;


// Optimal solution (O(logn))
bool search(vector<int>& nums, int target) {
        // approach: same as problem with distinct values, however, if standing on duplicate, increment the low.
        int n = nums.size();
        if(n == 1){
            return nums[0] == target;
        }
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                return true;
            }
            // first case, normal
            if(nums[mid] != nums[low]){
                // figure out which half sorted
                // case when right half sorted
                if(nums[mid] < nums[low]){
                    if(nums[mid] <= target && nums[high] >= target){
                        low = mid+1;
                    }
                    else{
                        high = mid-1;

                    }
                }
                // case when left half sorted
                else{
                    // if target exists between low - mid, eliminate right half
                    if(nums[mid] >= target && nums[low]<= target){
                        high = mid-1;

                    }
                    else{
                        low = mid+1;
                    }
                }
            }
            // second case, means duplicates, thus increment low ptr.
            else if(nums[mid] == nums[low]){
                low++;
            }
        }
        // return false if not found
        return false;
    
}
int main()
{
 
    return 0;
}