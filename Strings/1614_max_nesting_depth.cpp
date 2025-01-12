#include <bits/stdc++.h>
using namespace std;

// Optimal solution
int maxDepth(string s)
{

    int n = s.size();
    // max counter
    int max = 0;
    // store count
    int count = 0;
    // iterate through string, updating count and max.
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (c == '(')
        {
            count++;
            if (count > max)
            {
                max = count;
            }
        }
        else if (c == ')')
        {
            count--;
        }
    }

    // return the max result
    return max;
}

int main()
{
    /*
        Level: Easy
        Problem: Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.
        Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/
    */

    return 0;
}