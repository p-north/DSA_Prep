#include<bits/stdc++.h>
using namespace std;


// Brute force solution (using two hashmaps)
    bool isIsomorphic(string s, string t) {
        int s_size = s.size();
        int t_size = t.size();
        //  check early case
        if(s_size != t_size){
            return false;
        }
        // loop through one string mapping elements to t 
        //key value
        unordered_map<char, char> ump;
        // second unordered map
        unordered_map<char, char> t_to_s;
        for(int i = 0; i<s_size; i++){
            char key = s[i];
            char keyT = t[i];
            auto it = ump.find(key);
            auto itT = t_to_s.find(keyT);
            //  first check
            if(it != ump.end()){
                if(it->second != t[i]){
                    return false;
                }
            }
            else{
                ump[key] = t[i];
            }
            
            // second check for reverse
            if(itT != t_to_s.end()){
                if(itT->second != s[i]){
                    return false;
                }
            }
            // add key as usual 
            else{
                t_to_s[keyT] = s[i];
            }
        }

        return true;

}
int main()
{
    /*
        Level: Easy
        Problem: Given two strings s and t, determine if they are isomorphic. Two strings s and t are isomorphic if the characters in s can be replaced to get t. All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
        Link: https://leetcode.com/problems/isomorphic-strings/description/
    
    */
 
    return 0;
}