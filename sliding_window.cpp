#include<bits/stdc++.h>
using namespace std;

// EASY
// Best time to buy and sell stock
// Given an array prices, where prices[i] is the price of a stock on a given ith day. Maximize profit.
int maxProfit(vector<int>& prices){
    /*
        input: [7,1,5,3,6,4]
        output: 5
    */

    int n = prices.size();
    int profit = 0;
    int mini = prices[0];

    for(int i =0; i<n; i++){
        int price = prices[i] - mini;
        profit = max(profit, price);
        mini = min(prices[i], mini);
    }

    return profit;
}


// MEDIUM
// Longest substring without repeating characters
// Given a string s, find the length of the longest substring without substring duplicate characters
int lengthOfLongestSubstring(string s){
    int n = s.size();

    // fast edge cases
    if(n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    if(n==2){
        if(s[0]!=s[1]) return 2;
        else return 1;
    }

    // sliding window + hashmap approach
    int i = 0;
    int j = 0;
    int max_len = 0;

    // hashmap approach
    unordered_map<char, int> mpp;

    while(j<n){
        char ch = s[j];
        // if duplicate char, move the sliding window
        if(mpp.find(ch) != mpp.end()){
            // move the i ptr up
            if(mpp[ch]>=i){
                i=mpp[ch]+1;
            }
        }
        // update the maxlen and j ptr
        int size = j-i+1;
        mpp[ch] = j;
        max_len = max(size, max_len);
        j++;
        
    }


    return max_len;
}

// Longest repeating character replacement
// GIven a string s and an itneger k, choose any chars of the string and change it to anhy any other uppercase english char
// perform this operation at most k times.

// return the length of the longest substring containing the same letter you can get after perofrming the above operations

int characterReplacement(string s, int k){
    int n = s.size();
    int i = 0;
    int j = 0;
    int max_len = 0;
    int maxFreq = 0;

    // hashmap approach
    unordered_map<char, int> mpp;
    
    while(j<n){
        char ch  = s[j];
        int window_len = j-i+1;
        mpp[ch]++;
        maxFreq = max(maxFreq, mpp[ch]);
        // vlaue <= k, update max len
        if(window_len-maxFreq > k){
            mpp[s[i]]--;
            i++;

        }
        max_len = max(max_len, window_len);
        j++;
    }

    return max_len;
}

// Permutation in string
// Given two strings, return true if s2 contains a permutaion of s1. false otherwise
// Return true if s1's permutation is the substring of s2
bool checkInclusion(string s1, string s2){
    // susbtring with length s1.lengtth with same char frequencies

    int k = s1.size();
    int n = s2.size();

    // approach, use a hash table, go thru fixed size window, sort each dedicated string and compare
    int i = 0;
    int j = 0;
    string temp = "";
    string sorted_s1 = s1;
    sort(sorted_s1.begin(), sorted_s1.end());
    while(j<n){
        char ch = s2[j];
        temp.push_back(ch);
        int window_len = j-i+1;
        if(window_len != k){
            j++;
            continue;
        }
        else{
            // compare the strings
            // sort temp string
            string sorted = temp;
            sort(sorted.begin(), sorted.end());
            if(sorted == sorted_s1) return true;
            j++;
        }

        // move the window along
        i++;
        temp.erase(temp.begin());
    }

    return false;
}






int main(){
    string s1 = "ab";
    string s2 = "eidbaoo";

    cout << checkInclusion(s1, s2) << endl;


    return 0;
}