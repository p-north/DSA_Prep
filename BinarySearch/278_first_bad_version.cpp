#include<bits/stdc++.h>
using namespace std;


// Optimal O(logn) solution
class Solution {
public:
    int firstBadVersion(int n) {

        // need to call the firstBadVersion boolean func
        // minimize the number of calls
        
        // use a binary search approach
        // long long to support very large numbers
        long long low = 1;
        long long high = n;
        long long min_bad = LLONG_MAX;
        while(low<=high){
            long long mid = (low+high)/2;

            // check if badversion, if bad, look to left side for minimum
            if(isBadVersion(mid)){
                min_bad = min(mid, min_bad);
                high = mid-1;
            }
            // if bad version not found, look to right side
            else{
                low = mid+1;
            }
        }

        return min_bad;

        
    }
};

int main()
{
    /*
        Level: Easy
        Problem: Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad. You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.
        Level: https://leetcode.com/problems/first-bad-version/description/
    */
 
    return 0;
}