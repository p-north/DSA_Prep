#include <bits/stdc++.h>
using namespace std;

// solution
void moveZeroes(vector<int> &nums)
{
    int n = nums.size();

    if (nums.size() == 1)
    {
        return;
    }

    // point j to a zero
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j != -1)
    {
        // two pointer approach
        for (int i = j + 1; i < n; i++)
        {
            if (nums[i] > 0 || nums[i] < 0)
            {
                int t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
                j++;
            }
        }
    }
    else
    {
        return;
    }
}

int main()
{
    /*
        Level: Easy
        Link: https://leetcode.com/problems/move-zeroes/description/
        Problem: Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
    */

    return 0;
}