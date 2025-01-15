#include<bits/stdc++.h>
using namespace std;


// Brute force solution
vector<int> findDisappearedNumbers(vector<int>& nums) {
        // n is the size of the array
        int n = nums.size();

        // counter from 1 to n
        int cnt = 1;
        // iterate through the array, adding values to a hashmap.
        map<int, int> ump;
        for(int i = 0; i<n; i++){
            // store the frequency
            ump[nums[i]]++;
        }

        // result array
        vector<int> res;

        // iterate through the map, if any number not there flag it in result
        // if number is there, good, coninue until n;
        for(int i = 1; i<=n; i++){
            if(ump.find(i) == ump.end()){
                res.push_back(i);
            }
        }
        return res;
}

int main()
{
 
    return 0;
}