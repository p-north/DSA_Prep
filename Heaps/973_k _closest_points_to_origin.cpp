#include<bits/stdc++.h>
using namespace std;


// Brute force/ Semi Optimal solution
class Solution {
public:
    
    struct customCompare{
        int compute(vector<int> a){
            // compute the formula and return
            return pow(a[0], 2)+pow(a[1],2);
        }
        bool operator()(const vector<int> &a, const vector<int> &b){
            // Min heap
            // < = Max heap, > = Min heap
            return compute(a) > compute(b);
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        // want to return the minimum distance to the origin
        vector<vector<int>> res;
        // place items onto heap
        priority_queue<vector<int>, vector<vector<int>>, customCompare> pq;
        // iterate over array, adding items to heap
        for(auto &vec : points){
            pq.push(vec);
        }

        // return the kth items
        while(k!=0){
            auto vec = pq.top();
            res.push_back(vec);
            pq.pop();
            k--;
        }

        return res;
 
    }
};

int main()
{
    /*
        Level: Medium
        Problem: Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane and an integer k, return the k closest points to the origin (0, 0). The distance between two points on the X-Y plane is the Euclidean distance (i.e., √(x1 - x2)2 + (y1 - y2)2). You may return the answer in any order. The answer is guaranteed to be unique (except for the order that it is in).
        Link: https://leetcode.com/problems/k-closest-points-to-origin/description/
    */
 
    return 0;
}