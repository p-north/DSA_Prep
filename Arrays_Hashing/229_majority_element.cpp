#include <bits/stdc++.h>
using namespace std;

// optimal solution
vector<int> majorityElement(vector<int> &nums)
{
    // hash map approach
    int n = nums.size();
    int target = n / 3;

    vector<int> res;
    // iterate over the array, adding frequency to a map
    // key, frequency
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
    }

    // iterate over the map, if frequency equals target, add to res
    for (auto val : mpp)
    {
        if (val.second > target)
        {
            res.push_back(val.first);
        }
    }

    return res;
}

int main()
{
    /*
        Level: Medium
        Link: https://leetcode.com/problems/majority-element-ii/description/
        Problem: Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

    */

    return 0;
}
