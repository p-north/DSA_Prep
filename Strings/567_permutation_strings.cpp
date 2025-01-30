#include<bits/stdc++.h>
using namespace std;


// Brute force solution (Sliding Window)
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // next_permutation
        // add all the permutations


        
        if(s1.size() == 1 && s2.size()==1){
            return s1 == s2;
        }


        // sliding window, sort s1, check all substrings of s2 with size of s1
        string sortS1 = s1;
        // 0(nlogn)
        sort(sortS1.begin(), sortS1.end());

        // sliding window
        int i = 0;
        int k = s1.size();
        int j = 0;
        string tempj ="";
        // O(n)
        while(j<s2.size()){
            tempj.push_back(s2[j]);
            // get up to window length

            if(j-i+1<k){
                j++;
                continue;
            }
            else{
                string sortTemp = tempj;
                // O(nlogn)
                sort(sortTemp.begin(), sortTemp.end());
                if(sortTemp == sortS1){
                    return true;
                }
                
            }
            tempj.erase(0,1);
            i++;
            j++;

            // O(nlogn) + O(m*nlogn)
            //Worst case = O(m*nlogn)
        }

        return false;
        
    }
};

int main()
{
    /*
        Level: Medium
        Problem: Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise. In other words, return true if one of s1's permutations is the substring of s2.
        Link: https://leetcode.com/problems/permutation-in-string/description/

 
    
    */
 
    return 0;
}