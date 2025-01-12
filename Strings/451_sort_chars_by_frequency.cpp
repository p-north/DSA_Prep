#include <bits/stdc++.h>
using namespace std;

// Brute force solution
string frequencySort(string s)
{
    // result string
    string res = "";

    // using hashmap, map each char's frequency, add to sorted vector and push into resultant string.
    int n = s.size();
    map<char, int> mpp;
    vector<pair<char, int>> vec;

    // iterate through string adding each frequency to map
    for (int i = 0; i < n; i++)
    {
        char key = s[i];
        mpp[key]++;
    }
    // add map pairs into vecotr
    for (auto it : mpp)
    {
        pair<char, int> p = {it.first, it.second};
        vec.push_back(p);
    }
    // Sort by value
    std::sort(vec.begin(), vec.end(), [](const pair<char, int> &a, const pair<char, int> &b)
              { return a.second > b.second; });

    // iterate through vector, pushing each instance of string
    for (int i = 0; i < vec.size(); i++)
    {
        pair<char, int> p = vec[i];
        char c = p.first;
        int val = p.second;
        while (val != 0)
        {
            res.push_back(c);
            val--;
        }
    }

    // return the result string
    return res;
}

int main()
{
    /*
        Level: Medium
        Problem: Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string. Return the sorted string. If there are multiple answers, return any of them.
        Link: https://leetcode.com/problems/sort-characters-by-frequency/description/
    
    */

    return 0;
}