#include<bits/stdc++.h>
using namespace std;

// brute force solution
int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        set<int> st;

        // iterate over nums, adding to set.
        for(int i = 0; i<n; i++){
            st.insert(nums[i]);
        }

        // iterate over the set, add values to beginning of nums
        int j = 0;
        for(auto val: st){
            nums[j] = val;
            j++;
        }

        return st.size();

 

        
}

// optimal approach
// two pointer
int removeDuplicatesOptimized(vector<int>& nums) {
    int n = nums.size();

    int i = 0;
    for(int j = 1; j<n; j++){
        if(nums[j] != nums[i]){
            nums[i+1] = nums[j];
            i++;
        }
    }

        

 

        
}


int main()
{

 
    return 0;
}