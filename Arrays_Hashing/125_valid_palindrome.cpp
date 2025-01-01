#include <bits/stdc++.h>
using namespace std;
// brute force solution
bool isPalindrome(string s)
{
    string str = "";
    int n = s.size();

    // lower case the string
    for (auto c : s)
    {
        c = std::tolower(c);
        if (std::isalpha(c) || std::isdigit(c))
        {
            str.push_back(c);
        }
    }
    if (str.size() == 0 || str.size() == 1)
    {
        return true;
    }

    int j = str.size() - 1;
    // two pointer technique
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        if (i > j)
        {
            return true;
        }
        j--;
    }

    return false;
}

//slightly optimzed solution
 bool isPalindromeOptimized(string s) {
        string str = "";
        int n = s.size();
        

        // lower case the string
        for(auto c:s){
            c = std::tolower(c);
            if(std::isalpha(c) || std::isdigit(c)){
                str.push_back(c);
            }
        }
        if(str.size() == 0 || str.size() == 1){
            return true;
        }

        int i = 0;
        int j = str.size()-1;
        // two pointer technique
        while(i<j){
            if(str[i] == str[j]){
                i++;
                j--;
            }
            else{
               return false;
            }
            
        }


        return true;


        
        

    }

int main()
{
    /*
    Level: Easy
    Problem: A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
    Link: https://leetcode.com/problems/valid-palindrome/description/
    
    */

    return 0;
}