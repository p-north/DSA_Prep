#include<bits/stdc++.h>
using namespace std;


// Brute force solution!!
string reverseWords(string s) {
        // Remove leading spaces
        s.erase(0, s.find_first_not_of(' '));
    
        // Remove trailing spaces
        s.erase(s.find_last_not_of(' ') + 1);

        // remove all double spaces
        s = std::regex_replace(s, std::regex(" +"), " ");

        // Utilize a stack's, LIFO trait for this problem.
        stack<string> st;

        // iterate through string storing words
        string temp = "";
        for(int i = 0; i<s.size(); i++){
            if(s[i] == ' '){
                if(temp != "" || temp != " "){
                    st.push(temp);
                }
                temp = "";

            }
            else{
                temp.push_back(s[i]);
            }
        }
        // push the last one after
        st.push(temp);

        string result = "";
        while(!st.empty()){
            string top = st.top();
            result += top;
            if(st.size() != 1){
                result.push_back(' ');
            }
            st.pop();
        }

        return result;

        
}

int main()
{
    /*
        Level: Medium
        Problem: Given an input string s, reverse the order of the words. A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space. Return a string of the words in reverse order concatenated by a single space. Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.
        Link: https://leetcode.com/problems/reverse-words-in-a-string/description/
    
    */
 
    return 0;
}