#include<bits/stdc++.h>
using namespace std;

// EASY Kth largest element in a stream
// return the kth higest test score after a new score has been submitted.
class KthLargest {
public:
    // priority queue (min heap)
    int k;
    priority_queue<int, vector<int>, greater<int>> pq;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        // add nums to pw
        for(auto num: nums){
            pq.push(num);
            // if the heap size increases, pop the smallest element
            if(pq.size() > k){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        // add to queue
        pq.push(val);
        // if queue size is greter than k, pop the smallest element
        if(pq.size() > k){
            pq.pop();
        }
        
        return pq.top();
    }
    
};

// EASY
// Last stone weight
int lastStoneWeight(vector<int>& stones){
    // given an array of intergers stones, where stones[i] is the weight of the ith stone.

    // choose the heaviest two stoens and smash them together

    // weight x and y, with x<=y.

    // if x==y, both stones destroyed

    // if x != y, the stone of weight x si destroyed and sotne of weight y has new weight y-x
    // return the weight of the last remaining stone

    // --------------------------------------------------

    // max pq
    priority_queue<int> pq;

    // push nums into pq
    for(auto num: stones){
        pq.push(num);
    }

    // computation
    while(!pq.empty()){
        if(pq.size()==1) return pq.top();

        // compute
        int y = pq.top();
        pq.pop();
        int x = pq.top();
        pq.pop();
        // both destoyed
        if(y!=x){
            int absV = abs(y-x);
            pq.push(absV);
        }
       
    }

    return 0;
}

// MEDIUM
// K closest points to origin
vector<vector<int>> kClosest(vector<vector<int>>& points, int k){
    vector<vector<int>> result;

    // lambda function for priority queue, we want the least value first (closest to origin)
    auto cmp = [](const vector<int> a, const vector<int> b){
        int a_val = sqrt(pow(a[0], 2)+pow(a[1], 2));
        int b_val = sqrt(pow(b[0], 2)+pow(b[1], 2));

        return a_val > b_val;

    };


    // priority queue approach
    // given an array of points, where points[i] = [xi, yi] represents a point on the x-y plane, return k closest points to the origin (0, 0).

    priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> pq(cmp);

    // add to priority ququ
    for(auto point: points){
        pq.push(point);
    }

    // getting the k value
    while(!pq.empty() && k!=0){
        vector<int> top = pq.top();
        pq.pop();
        result.push_back(top);
        k--;
    }

    return result;

     
}

// MEDIUM
// Kth largest element in an Array
int findKthLargest(vector<int>&nums, int k){
    
    // given an integer array nums, and an itneger k, returh the kth largest element in the array.

    int n = nums.size();

    priority_queue<int> pq;

    // add items to pq
    for(auto num: nums){
        pq.push(num);
    }

    // get the kth largest
    int largest = 0;
    while(!pq.empty() && k !=0){
        largest = pq.top();
        pq.pop();
        k--;
    }

    return largest;
}

// MEDIUM
// DESIGN TWITTER






int main(){ 



    return 0;
}