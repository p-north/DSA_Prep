#include<bits/stdc++.h>
using namespace std;


class TimeMap {
public:
    // hashmap implmentation
    // for setting attributes, use a hashtable
    // for getting timestamps, use binary search
    // key -> {p1, p2} s.t p1={value, timestamp}....pn{..,..,}
    unordered_map<string, vector<pair<string, int>>> ump;
    TimeMap() {
    }
    void set(string key, string value, int timestamp) {
        // map key to pair{value, timestamp}
        ump[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        // no key found
        string res="";
        auto& result = ump[key];
        // use binary search to find the most recent timestamp
        int left = 0;
        int right = result.size()-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            // second is the timestamp
            if(result[mid].second <= timestamp){
                res = result[mid].first;
                left = mid + 1;
            }
            else{
                right = mid-1;
            }
        }

        return res;

        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */

int main()
{
    /*
        Level: Medium
        Problem: Design a time-based key-value data structure that can store multiple values for the same key at different time stamps and retrieve the key's value at a certain timestamp.
        Link: https://leetcode.com/problems/time-based-key-value-store/description/
    
    
    */
 
    return 0;
}