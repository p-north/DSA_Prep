#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        // using hash map
        unordered_map<char, int> mpp;
        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;

        //iterte through thr string, if next char greater than prev, make it negative
        int res = 0;
        for(int i = 0; i<s.size(); i++){
            // find the value in array
            char c = s[i];
            // find the key, val of c
            auto it = mpp.find(c);
            if(i != s.size()-1 && it->second < mpp.find(s[i+1])->second){
                res = res - ((it)->second);
            }
            else{
                res = res + ((it)->second);
            }


        }

        return res;

        
    }
};

int main()
{
    /*
        Level: Easy
        Problem: Given a roman numeral, convert it to an integer.
        Link: https://leetcode.com/problems/roman-to-integer/description/
    
    */
 
    return 0;
}