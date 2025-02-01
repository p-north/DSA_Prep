#include<bits/stdc++.h>
using namespace std;

// Binary search (O(logn)) solution
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1){
            return true;
        }

        // [1,....,16]
        // perform binary search up until the number
        long long low = 1;
        long long high = num;
        int target = num;

        while(low<=high){
            long long mid = (low+high)/2;
            long long value = mid*mid;

            if(value==target){
                return true;
            }
            else if(value>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return false;

    }
};

int main()
{
    /*
        Level: Easy
        Problem: Given a positive integer num, return true if num is a perfect square or false otherwise. A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself. You must not use any built-in library function, such as sqrt.
        Link: https://leetcode.com/problems/valid-perfect-square/description/
    
    */
 
    return 0;
}