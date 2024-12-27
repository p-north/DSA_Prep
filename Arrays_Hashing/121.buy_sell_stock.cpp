#include<bits/stdc++.h>
using namespace std;


//optimized solution
 int maxProfit(vector<int>& prices) {
        // size of array
        int n = prices.size();

        // track minimum price
        int mini = prices[0];
        // track profit
        int profit = 0;
        // iterate through 2nd day till n-1
        for(int i = 1; i<n; i++){
            //  comute cost
            int cost = prices[i] - mini;
            // take the larger of profit or cost
            profit = max(profit, cost);
            // update the minimum for next iteration
            mini = min(prices[i], mini);
        }


       
        return profit;


        
    }

int main()
{
    /*
        Level: Easy
        Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
        Problem: You are given an array prices where prices[i] is the price of a given stock on the ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
    */
 
    return 0;
}