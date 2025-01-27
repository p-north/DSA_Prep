#include<bits/stdc++.h>
using namespace std;


// Optimal heap solution
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // edge case
        int n = stones.size();
        if(n==1){
            return stones[0];
        }

        // using heap data structure
        //get two heaviest stones (x,y).
            //if x == y, both stones are destroyed
            // if x != y, stone of weight x is destoyed and stone y has new weight of y-x.
            // must be one stone left at the ned
        
        //heap
        priority_queue<int> pq;
        //iterate over the vec, adding all stones to pq
        for(auto &it:stones){
            pq.push(it);
        }

        //now pq = {8, 7, 4, 2, 1, 1}
        // iterate over pq, smashing heaviest stones together until size one
        while(pq.size()!=1){
            if(pq.size() == 0){
                break;
            }
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            if(x == y){
                pq.pop();
                //remove 2nd one as well
            }
            //x != y
            else{
                // remove x as well
                pq.pop();
                // new y weight
                y = y-x;
                // push it back onto
                pq.push(y);
            }
        }

        if(pq.size() == 0){
            return 0;
        }
        return pq.top();

        
    }
};

int main()
{
    /*
        Level: Easy
        Problem: You are given an array of integers stones where stones[i] is the weight of the ith stone.
            We are playing a game with the stones. On each turn, we choose the heaviest two stones and smash them together. Suppose the heaviest two stones have weights x and y with x <= y. The result of this smash is:

            If x == y, both stones are destroyed, and
            If x != y, the stone of weight x is destroyed, and the stone of weight y has new weight y - x.
            At the end of the game, there is at most one stone left.

            Return the weight of the last remaining stone. If there are no stones left, return 0.
        Link: https://leetcode.com/problems/last-stone-weight/description/
    
    */
 
    return 0;
}