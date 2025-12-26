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




int main(){
    vector<int> matrix  = {30,11,23,4,20};
    cout <<  minEatingSpeed(matrix,5) << endl;


}