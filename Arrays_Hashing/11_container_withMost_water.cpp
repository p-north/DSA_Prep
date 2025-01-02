#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
        // two pointer approach
        // starting out from the left and right, slowly moving in
        // result is computed by area = min(hLeft, hRight) * (right-left);
        int n = height.size();
        // checkout early test case
        if(n == 2){
            return min(height[0], height[1]) * (1-0);
        }
        // store the max so far
        int max = 0;
        // left pointer
        int left = 0;
        // right pointer
        int right = n-1;
        while(left < right){
            int hLeft = height[left];
            int hRight = height[right];
            // calc area
            int area = min(hLeft, hRight) * (right-left);
            // answer case, store max
            if(area > max){
                max = area;
            }
            // increment left ptr if element smaller
            if(hLeft < hRight){
                left++;
            }
            // decrement right ptr if element smaller
            else if(hRight < hLeft){
                right--;
            }
            // move both pointers if elements duplicate
            else if(hRight == hLeft){
                left++;
                right--;
            }
        }

        // return the max result
        return max;


        
}

int main()
{
    /*
        Level: Medium
        Problem: You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]). Find two lines that together with the x-axis form a container, such that the container contains the most water. Return the maximum amount of water a container can store.
        Link: https://leetcode.com/problems/container-with-most-water/description/
    */
 
    return 0;
}