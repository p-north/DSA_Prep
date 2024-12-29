#include<bits/stdc++.h>
using namespace std;

// hash table solution
// O(n)
bool isAnagram(string s, string t) {


        // must have the same chars

        // char must appear same number of times

        // order does not matter


        // iterate over string 1
        int s_size = s.size();
        int t_size = t.size();

        if(s_size != t_size){
            return 0;
        }

        int ss[26] = {0};
        int s2[26] = {0};

        // iterate through string, adding frequency to hashtable
        for(int i = 0; i<s_size; i++){
            ss[s[i]-'a']++;
            s2[t[i]-'a']++;
        }

        // iterate through hastable checking for consistency
        for(int i = 0; i<26; i++){
            if(ss[i] != s2[i]){
                return false;
            }
        }

        return true;

       

        

        
}

int main()
{
    /*
        Level: Easy
        Link: https://leetcode.com/problems/valid-anagram/description/
        Problem: Given two strings s and t, return true if t is ananagram of s, and false otherwise.
    */
 
    return 0;
}
