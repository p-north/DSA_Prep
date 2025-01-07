#include<bits/stdc++.h>
using namespace std;

// optimal solution (Yt video for help...)
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // rows
        int n = matrix.size();
        //  columns
        int m = matrix[0].size();

        int low = 0;
        int high = (n*m)-1;
        // iterate to find target
        bool checkT = 0;
        while(low <= high){
        
            int mid = (low+high)/2;
            // computation for row and col
            int row = mid/m;
            int col = mid%m;
            // check if target
            if(matrix[row][col] == target){
                checkT = 1;
                break;
            }
            // increment low if < target
            else if(matrix[row][col]<target){
                low = mid+1;
            }
            // decrement high is num[mid] > target
            else{
                high = mid-1;
            }
            

        }

        return checkT;
        
        
}

int main()
{
    /*
        Level: Medium
        Problem: You are given an m x n integer matrix matrix with the following two properties: Each row is sorted in non-decreasing order. The first integer of each row is greater than the last integer of the previous row. Given an integer target, return true if target is in matrix or false otherwise.
        Link: https://leetcode.com/problems/search-a-2d-matrix/description/
    
    
    */
 
    return 0;
}