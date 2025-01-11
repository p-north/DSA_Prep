#include<bits/stdc++.h>
using namespace std;


// optimal solution
bool rotateString(string s, string goal) {
        int n = s.size();
        for(int i = n-1; i>=0; i--){
            // check if string is goal
            if(s == goal){
                return true;
            }
            // else start rotating the string, adding last element to front
            else{
                // get the last element
                char c = s.back();
                // pop the last element
                s.pop_back();
                // insert last element at first idx
                s.insert(0, 1, c);
            }


        }
        // return false if cannot reach goal
        return false;     
}
int main()
{
    /*
        Level: Easy
        Problem: Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s. A shift on s consists of moving the leftmost character of s to the rightmost position.
        Link: https://leetcode.com/problems/rotate-string/description/
    */
 
    return 0;
}