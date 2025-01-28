#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int calPoints(vector<string>& operations) {
        // stack/vec implementation
        int sum = 0;
        vector<int> record;
        // int  = add to record
        // + = record new score sum of previous two scores and add back
        // D = record a new score that is double the one of previpus
        // C = invalidate the previous score, removing it form the record

        for(auto &str : operations){
            if(str == "C"){
                // pop
                if(!record.empty()){
                    record.pop_back();
                }
            }
            else if(str == "D"){
                // double
                record.push_back((2)*record.back());
            }
            else if(str == "+"){
                // sum of previous two scores
                int val1 = record.back();
                int val2 = record[record.size()-2];
                record.push_back(val1+val2);
            }
            // digit
            else{
                record.push_back(stoi(str));
            }
        }


        // sum up
        for(auto &val:record){
            sum+=val;
        }

        return sum;






        
    }
};
int main()
{
    /*
        Level: Easy
        Problem: You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the followinReturn the sum of all the scores on the record after applying all the operations.
        Link: https://leetcode.com/problems/baseball-game/description/
    
    
    */
 
    return 0;
}