#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        // store the first string
        string commonPX = strs[0];
        for(int i = 1; i<n; i++){
            // iterate through, prefix, cutting back last char until matched with strs[i].
            while(strs[i].find(commonPX) != 0){
                commonPX.pop_back();
                // if prefix becomes empty at any point, return (no matching pfx found)
                if(commonPX.empty()){
                    return "";
                }
            }
        }

        return commonPX;
        
    }
};

int main()
{
    /*
        Level: Easy
        Problem: Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".
        Link: https://leetcode.com/problems/longest-common-prefix/description/
    
    */
 
    return 0;
}