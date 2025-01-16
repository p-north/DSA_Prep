#include<bits/stdc++.h>
using namespace std;

// Heap implementation
int findKthLargest(vector<int>& nums, int k) {
        // set implementation
        /*
            - use a priority queue
            - iterate through nums, storing each element in pq (heap).
            - while loop until k, popping front elements, once reached k, that is the kth largest.
            - 
        */
        int res = 0;
        // EXAMPLE: [3, 2, 3, 1, 2, 4, 5, 5, 6]
        // n size = 9
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        // {}
        priority_queue<int> pq;

        // itration thorugh array, adding each val to heap
        for(int i = 0; i<n; i++){
            pq.push(nums[i]);
        }

        // heap should look something like : {6, 5, 5, 4, 3, 3, 2, 2, 1}
        // k = 4

        // while loop
        int i = 1;
        while(!pq.empty()){
            int val = pq.top();
            // {4, 3, 3, ...}
            if(i == k){
                res = val;
                break;
            }
            else{
                i++;
                pq.pop();
            }
        }

        return res;

        
}

int main()
{

    /*
        Level: Medium
        Problem: Given an integer array nums and an integer k, return the kth largest element in the array. Note that it is the kth largest element in the sorted order, not the kth distinct element.
        Link: https://leetcode.com/problems/kth-largest-element-in-an-array/description/
    
    */
 
    return 0;
}