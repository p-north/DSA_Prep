#include<bits/stdc++.h>
using namespace std;


// Optimal solution O(1) Hashmap + DLL
class LRUCache {
public:
    // doubly linkedlist to store recently used and longest used
    list<int> key_list;
    // hashmap for lookups
    unordered_map<int, int> ump;
    // hashmap for node removal in O(1) time (key -> list iterator)
    unordered_map<int, list<int>::iterator> key_pos;
    int cap;
    LRUCache(int capacity) {
        //initialize list with the capacity
        cap = capacity;
    
    }
    int get(int key) {
        // get the value of key if it exists, moving location to recently used
        if(ump.find(key) != ump.end()){
            // pop it from font, add to back
            key_list.erase(key_pos[key]);
            key_list.push_back(key);
            // Update position of the key in the hashmap
            key_pos[key] = --key_list.end();
            // return the key
            return ump[key];
        }
        // key not there return -1
        else{
            return -1;

        }
    }
    void put(int key, int value) {
        // place most used key from the front
        // check for capacity first
        // evict the recently used key if full
        // check if key already in hashmap
        if(ump.find(key) != ump.end()){
            ump[key] = value;
            key_list.erase(key_pos[key]);
            key_list.push_back(key);
            // Update position of the key in the hashmap
            key_pos[key] = --key_list.end();
            
        }
        else{
            if(key_list.size() == cap){
                // erase key from hashmap
                int key_front = key_list.front();

                // remove it from list
                key_list.pop_front();

                ump.erase(key_front);
                key_pos.erase(key_front);
            }
            // Add the new key-value pair
            ump[key] = value;
            key_list.push_back(key);
            key_pos[key] = --key_list.end();
        }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */ 


int main()
{
    /*
        Level: Medium
        Problem: Design a data structure that follows the constraints of a Least Recently Used (LRU) cache. Implement the LRUCache class: LRUCache(int capacity) Initialize the LRU cache with positive size capacity. int get(int key) Return the value of the key if the key exists, otherwise return -1. void put(int key, int value) Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache. If the number of keys exceeds the capacity from this operation, evict the least recently used key. The functions get and put must each run in O(1) average time complexity.
        Link: https://leetcode.com/problems/lru-cache/description/

 
    
    */
 
    return 0;
}