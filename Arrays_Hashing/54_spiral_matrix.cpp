#include<bits/stdc++.h>
using namespace std;

// optimal solution after watching yt vid
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // output array
        vector<int> output;
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0;
        int left = 0;
        int bottom = n-1;
        int right = m-1;
        while(top<=bottom && left <= right){
            for(int i = left; i<=right; i++){
                output.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top; i<=bottom; i++){
                output.push_back(matrix[i][right]);
            }
            right--;
            if(top <= bottom){
                for(int i = right; i>=left; i--){
                    output.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left <= right){
                for(int i = bottom; i>= top; i--){
                    output.push_back(matrix[i][left]);
                }
                left++;
            }
        }


        return output;
        

        
        
    }

int main()
{
    /*
        Level: Medium
        Link: https://leetcode.com/problems/spiral-matrix/description/
        Problem: Given an m x n matrix, return all elements of the matrix in spiral order.
    
    */
 
    return 0;
}