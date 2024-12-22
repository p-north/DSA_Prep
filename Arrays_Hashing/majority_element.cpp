#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();

        // pre computing
        // key, frequency value
        // k => value
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[nums[i]]++;
        }

        // find max element
        int max = 0;
        long long res = 0;
        for (auto it : mpp)
        {
            int freq = it.second;
            int key = it.first;
            if (freq > max)
            {
                max = freq;
                res = key;
            }
        }

        return res;
    }
};

int main()
{
    /*
        Problem: Given an array nums of size n, return the majority element.
        The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

    */

    return 0;
}