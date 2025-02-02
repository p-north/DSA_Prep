#include<bits/stdc++.h>
using namespace std;



// Suboptimal O(nlogn) solution
class Solution {
public:
   
    int hIndex(vector<int>& citations) {
        // given citation array
        // citations[i] is number of citation a researcher recived for ith paper


        // h-index is defined as the maximum value of h 

        // h papers that have been cited h times

        // h papers == h citations


        // sort the array descending order

        sort(citations.begin(), citations.end(), greater<int>());


        // iterate over sorted array
        int count = 0;
        for(auto &citation:citations){
            if(citation > count){
                count++;
            }
        }

        return count;  
    }
};

int main()
{
    /*
        Level: Medium
        Problem: Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper, return the researcher's h-index.
        Link: https://leetcode.com/problems/h-index/description/
        
    
    
    */
 
    return 0;
}