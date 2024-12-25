#include <bits/stdc++.h>
using namespace std;

// brute force solution (1st attempt)
int singleNumber(vector<int> &nums)
{
    int n = nums.size();
    // iniitalize the map
    unordered_map<int, int> ump;

    // iterate over the array, adding values to map
    // pre compute
    // number, frequency
    for (int i = 0; i < n; i++)
    {
        ump[nums[i]]++;
    }

    // iterate over the map, find value with frequency = 1
    long long res = 0;
    for (auto val : ump)
    {
        if (val.second == 1)
        {
            res = val.first;
        }
    }

    return res;
}


// optimized solution


int main()
{
    /*
        Level: Easy
        Link: https://leetcode.com/problems/single-number/
        Problem: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
                 You must implement a solution with a linear runtime complexity and use only constant extra space.
    */


    return 0;
}