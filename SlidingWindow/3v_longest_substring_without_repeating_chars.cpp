#include<bits/stdc++.h>
using namespace std;

// sliding window approach
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        //edge case
        if(n==0){
            return 0;
        }
        if (n==1){
            return 1;
        }
        if(n==2 && s[0] != s[1]){
            return 2;
        }



        /*
            Sliding Window Approach

            -return the longest length of the substring
            -
        */
        // store the max length
        int maxLength = 0;
        // hashtable to store frequencies
        unordered_map<char, int> mpp;
        int i = 0;
        int j = 0;
        while(j<n){
            // if duplicate found at s[j], move the start pointer within window
            if(mpp.find(s[j]) != mpp.end()){
                // ensure duplicate is within window
                if(mpp[s[j]] >= i){
                    i = mpp[s[j]] + 1;
                }
            }
            // update the length
            maxLength = max((j-i+1), maxLength);
            // move window and update hashmap
            mpp[s[j]] = j;
            j++;
        }
        return maxLength;



        
    }
};

int main()
{
    /*
        Level: Medium
        Problem: Given a string s, find the length of the longest substring without repeating characters.
        Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
    
    */
 
    return 0;
}