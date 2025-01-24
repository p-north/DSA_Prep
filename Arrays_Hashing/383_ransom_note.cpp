#include<iostream>
using namespace std;


// Hashmap implementation
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // hash table implementation

        //iterate through mag, counting all frequencies
        unordered_map<char, int> mpp;
        for(auto c: magazine){
            mpp[c]++;
        }

        //iterate through ransom, checking each char in frequency map and decrementing after check
        for(auto c: ransomNote){
            //not found
            if(mpp.find(c) == mpp.end()){
                return false;
            }
            else{
                mpp[c]--;
                if(mpp[c] == 0){
                    mpp.erase(c);
                }
            }

        }

        return true;
        
    }
};


int main()
{
    /*
        Level: Easy
        Problem: Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
        Link:https://leetcode.com/problems/ransom-note/description/
    
    */
 
    return 0;
}