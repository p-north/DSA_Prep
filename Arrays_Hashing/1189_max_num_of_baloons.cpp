#include<bits/stdc++.h>
using namespace std;


// Optimal solution
class Solution {
public:
    int maxNumberOfBalloons(string text) {

        //hashmap implementation

        string balloon = "balloon";
        string dummy = "";

        //count the frequencies of text
        unordered_map<char, int> mpp;
        for(auto &c:text){
            //only add relevent letters
            if(balloon.find(c) != string::npos){
                mpp[c]++;
            }
        }

        //iterate over balloon
        int count = 0;
        int idx = 0;
        while(!mpp.empty() && idx<balloon.size()){
            char c = balloon[idx];
            // found, remove instance from hash and add to dummy
            if(mpp.find(c) != mpp.end()){
                dummy.push_back(c);
                mpp[c]--;
                if(mpp[c] == 0){
                    mpp.erase(c);
                }
            }
            // if dummy equals to balloon, reset and increment counter
            if(dummy == balloon){
                count++;
                idx = 0;
                dummy = "";
            }
            // else just increment the index
            else{
                idx++;
            }
            
        }

        return count;

        
    }
};

int main()
{
    /*
        Level: Easy
        Problem: Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible. You can use each character in text at most once. Return the maximum number of instances that can be formed.
        Link: https://leetcode.com/problems/maximum-number-of-balloons/description/
    
    */
 
    return 0;
}