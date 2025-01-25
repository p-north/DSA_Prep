#include<bits/stdc++.h>
using namespace std;

// Optimal hashmap solution
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        //hashmap implementation
        //iterate through jewels, adding fqs to hashmap
        unordered_map<char, int> mpp;
        for(auto &c:jewels){
            mpp[c]++;
        }

        //iterate thorugh stones, comaparing chars with letters in fq map
        int count = 0;
        for(auto&c:stones){
            if(mpp.find(c) != mpp.end()){
                count++;
            }


        }

        return count;
        
    }
};

int main()
{
 
    return 0;
}