#include<bits/stdc++.h>
using namespace std;


// EASY
// Binary search
int search(vector<int>&nums, int target){
    int n = nums.size();
    int left = 0;
    int right = n-1;



    while(left<right){
        int mid = (left+right)/2;

        if(nums[mid] == target){
            return mid;
        }
        else if (nums[mid]<target){
            left++;
        }
        else{
            right--;
        }
    }
    return -1;
}


// MEDIUM
// Given a mxn amtrix with the following two properties,
// Each row is sorted in non-decreasing order
// The first integer of each row is greater tahn the last integer of the previous row.
bool searchMatrix(vector<vector<int>>& matrix, int target){
    // rows
    int n = matrix.size();
    // columns
    int m = matrix[0].size();
    int left = 0;
    int right = (n*m)-1;
    bool checkT = 0;
    while(left<=right){
        int mid = (left+right)/2;
        int row = mid/m;
        int col = mid%m;
        if(matrix[row][col]==target){
            return true;
        }
        else if(matrix[row][col]<target){
            left++;
        }
        else{
            right--;
        }
    }


    return false;
}

// MEDIUM
// N piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
// can eat the speed of K, each hour, eats K bananas from the pile
// If pile has less than K bananas, she eats all of them instead and will not eat any more bananas during this hour.

// return the minimum integer k such  she can eat all the fruits within  h hours.
int maxPiles(vector<int>& pile){
    int maxP =INT_MIN;
    for(auto it: pile){
        maxP = max(it, maxP);
    }
    return maxP;
}

int calcHours(vector<int>&pile, int k){
    // calculate the total hours at speed k
    int total=0;

    for(auto it: pile){

        if(it <= k){
            total++;
        }
        else if(it > k){
            int temp = it;
            // total hours
            while(temp > 0){
                temp-=k;
                total++;
            }
        }

    }

    return total;
}


int minEatingSpeed(vector<int>& piles, int h){
    int n = piles.size();
    int res = 1;
    int lowerK = 1;
    int upperK = maxPiles(piles);



    while(lowerK<=upperK){
        // mid point for k
        int k = lowerK+(upperK-lowerK)/2;
        // compute the total hours
        long long tot_hours = calcHours(piles, k);
        // if the total hours <= h -> try smaller k
        if(tot_hours <= h){
            upperK = k-1;
            res = k;
        }
        else if(tot_hours > h){
            lowerK=k+1;
        }
        // if the total hours > h -> try bigger k
    }

    return res;

}

// MEDIUM
// Find the minimum in rotated sorted array
// Suppose an array of length  is sorted.
// Rotate the sorted array
// Find the minimum
int findMin(vector<int>&nums){
    int n = nums.size();

    // edge cases
    if(n==1) return nums[0];
    if(n==2) return min(nums[0], nums[1]);

    int left = 0;
    int right = n-1;
    int ans = INT_MAX;

    while(left<=right){
        int mid = left+right/2;

        if(nums[left] <=nums[mid]){
            ans = min(nums[left], ans);
            // eliminate the left half
            left = mid+1;
        }
        else {
            ans = min(nums[right], ans);
            right = mid-1;

        }

    }

    return ans;
    // Binary search approach
}

// MEDIUM
// Search in rotated sorted array
// given rotated array nums after possible rotation and an integer target, return the index of target if it is in nums, or -1 it it is not it nums.
int search(vector<int>& nums, int target){
    int n = nums.size();
    int left = 0;
    int right = n-1;

    while(left<=right){
        int mid = (left+right)/2;

        if(nums[mid] == target){
            return mid;
        }

        // figure out sorted left or right
        // right half sorted
        else if(nums[left] > nums[mid]){
            if(nums[mid]<=target && nums[right]>=target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }

        // left half sorted
        else{
            if(nums[left]<=target && nums[mid]>=target){
                right = mid-1
            }
            else{
                left = mid+1;
            }
        }

    }

    return -1;
}

// MEDIUM
// Time based key value store
// Design a time-based key value data strcuture can store multiple value for the same key at different time stamps and retrieve the key's value at a certain timestamp
class TimeMap {
public:
    // hashmap aproach
    unordered_map<string , vector<pair<string, int>>> mpp;

    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        // stores the key with the value given at the time timestamp
        pair<string, int> my_pair = {value, timestamp};
        mpp[key].push_back(my_pair);
    }
    
    string get(string key, int timestamp) {
        // retrieves the value for a given timestamp
        // if multiple values, return largest

        // use binary search for gettng the element
        auto it = mpp.find(key);

        // no such value
        if(it == mpp.end()){
            return "";
        }

        int left = 0;
        int right = it->second.size()-1;
        string val;
        int maxV = INT_MIN;
        while(left<=right){
            int mid = (left+right)/2;

            int timestamp_mid = it->second.at(mid).second;
            string val_mid = it->second.at(mid).first;
            // if value <= target, store it, move the lef tptr up
            if(timestamp_mid <= timestamp){
                if(max(maxV, timestamp_mid) > maxV){
                    maxV = max(maxV, timestamp_mid);
                    val = val_mid;
                }
                left = mid+1;

            }

            // else value > target, mode the rigt pointers back mid-1
            else{
                right = mid-1;
            }
        }

        return val;

        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */


 








int main(){
    vector<int> matrix  = {30,11,23,4,20};
    cout <<  minEatingSpeed(matrix,5) << endl;


}