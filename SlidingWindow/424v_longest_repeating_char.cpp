#include<bits/stdc++.h>
using namespace std;


// Solution: After watching neetcode tutorial on problem
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();

        // Given a string s, and int k. Choose any char of the string andchange it to any other uppercase Enlgish 
        // char. Perform this operation at k times.

        // only can do k operations

        int maxLength = 0;
        // hash map to store
        unordered_map<char, int> mpp;
        int i = 0;
        int j = 0;
        int maxF = 0;
        while(j<n){
            // increment freq count for char
            mpp[s[j]]++;
            // get the max freq of string
            maxF = max(maxF, mpp[s[j]]);
            
            // if substring contains too many chars, shrink window size
            while(((j-i+1)-maxF ) > k){
                mpp[s[i]]--;
                i++;
            }
            // get the max susbtring length
            maxLength = max(maxLength, j-i+1);
            j++;

        }

        return maxLength;
        
    }
};

int main()
{
 
    return 0;
}