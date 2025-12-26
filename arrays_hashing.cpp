#include<bits/stdc++.h>
using namespace std;


// given an array nums, return true if any value appears twice in the array.

// return true -> value appears twice in the array
// return false -> every element is distinct

bool containsDuplicate(vector<int>& nums){
    // hash map implmentation
    int n = nums.size();

    /*
        input: [1,2,3,1]
        output: true

        input: [1,2,3,4]
        output: false

        input: [2,2,2,2,]
        output: true
    */

    unordered_map<int, int> mpp;
    // iterate thru array add  values to hash map
    for(int i = 0; i<n; i++){
        int val = nums[i];
        mpp[val]++;
    }
    /*
        1->2
        2->1
        3->1
    
    
    */

    // iterate thur map if there key with value greater than 1, it is duplicate return truer
    for(auto it: mpp){
        if(it.second > 1){
            return true;
        }
    }

    return false;
}


// given an array nums, containing n distinct numbers in the range [0, N], retuirn the only number in the range that is missing from the array
int missingNumber(vector<int> &nums){
    int n = nums.size();

    /*
        input: [3,0,1]
        output: [2]

        input: [1,2,4,5]
        output: 3
    
    */

    // get the sum
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum+=nums[i];
    }

    int expectedSum = (n*(n+1))/2;
    int missingNum = abs(expectedSum - sum);


    return missingNum;

}

// given an array nums, of n integers where nums[i] is in the range [1,n], return an array of all the integers in the range [1,N] that do not appear in nums
vector<int> findDisappearedNumbers(vector<int>& nums){
    set<int> stt;
    
    int n= nums.size();

    /*
        input: [4,5,6,3,2,1,1,4] -> N=8
        output: [7,8]

    
    
    
    */

    // array of 1 to N
    for(int i = 1; i<=n; i++){
        stt.insert(i);
    }

    // Set-> {1,2,3,4,5,6,7,8}

    for(int i = 0; i<n; i++){
        int num = nums[i];
        if(stt.find(num) != stt.end()){
            stt.erase(num);
        }    
    }

    // Set -> {7,8}

    vector<int> res;
    // copy set elemtns to vector resultant
    for(auto i: stt){
        res.push_back(i);
    }
     
    // res-> [7,8]

    return res;

}

// given a non-empty array of integers nums, every element appears twice except for one. Find the single one
int singleElement(vector<int> &nums){
    // hash map technique
    int n= nums.size();

    unordered_map<int, int> mpp;
    for(int i = 0; i<n; i++){
        mpp[nums[i]]++;
    }

    // find the single element
    for(auto it: mpp){
        if(it.second== 1){
            return it.first;
        }
    }
    return 0;
}

// convert 1d array into 2d array
// givena  0-indexed 1D array, amd two integets m and n. Create a 2d array with m rows and n columns using all elements from the original 1D array.
vector<vector<int>> construct2DArray(vector<int>& original, int m, int n){
    // if impossible to fit, return a empty 2d array
    vector<vector<int>> res;
    int original_size = original.size();

    // edge case, when array size > n 
    if(m*n != original_size){
        return res;
    }


    // build the first row first, 
    int i = 0;
    for(int row = 0; row<m; row++){
        vector<int> curr;
        for(int col = 0; col<n; col++){
            curr.push_back(original[i]);
            i++;
        }
        res.push_back(curr);
    }


    return res;
}

// given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]
vector<int> productExceptSelf(vector<int> &nums){
    // prefix sufix approachd
    int left[nums.size()];
    int right[nums.size()];

    vector<int> res;

    left[0] = 1;
    for(int i = 0; i<nums.size(); i++){
        left[i] = left[i-1] * nums[i-1];
    }

    right[nums.size()-1] = 1;
    for(int i = nums.size()-2; i>=0; i--){
        right[i] = right[i+1] * nums[i+1];
    }

    for(int i = 0; i<nums.size(); i++){
        res[i] = left[i]*right[i];
    }


    return res;
}


// given an m x n integer matrix, if an elemnt is 0, set its entire row and column to 0s
void setZeroes(vector<vector<int>>&matrix){
    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[i].size(); j++){
            int val = matrix[i][j];
            if(val == 0){
                // mark enitre row and column as -1

                // entire row
                for(int k = 0; k<matrix[i].size(); k++){
                    if(matrix[i][k] != 0){
                        matrix[i][k] = -1;
                    }
                }
                // entire column
                for(int p = 0; p<matrix.size(); p++){
                    if(matrix[p][j] != 0){
                        matrix[p][j] = -1;
                    }
                }
                
            }
        }
    }

    // set everything to zero if -1
    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[i].size(); j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }



}



void sortColors(vector<int>&nums){
     // multiset solution
    multiset<int> stt;
    for(auto num: nums){
        stt.insert(num);
    }

    vector<int> temp;
    for(auto num: stt){
        temp.push_back(num);
    }

    for(int i = 0; i<nums.size(); i++){
        nums[i]=temp[i];
    }
}

// struct custom {
//     bool operator()(const pair<int, int>&a, const pair<int, int>&b){
//         // {value, freq}
//         return a.second > b.second;
//     }
// };



// Given an integer array nums and integer K, return the K most frequent elements. Return the answer in any order
vector<int> topKFrequent(vector<int> nums, int k){
    auto custom = [](const pair<int, int>&a, const pair<int, int>&b){
    return a.second > b.second;
    };
    int n = nums.size();

    /*
        ---Test cases----
        k = 3
        input: [1,1,1,2,3,3,4,5]
        output: [1,3]

        k=2
        input: [1,2,4,2,5,4]
        ouptut: [2,4]
        
        k=1
        input: [1,2,3,4,5]
        output: [1]
    
    */

    // priority queue technique
    // {value, freq}
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(custom)> pq(custom);

    // hash map
    // iterate thru the array add frequencies to map
    unordered_map<int, int> mpp;
    for(auto num: nums){
        mpp[num]++;
    }

    // Map: {{1->1}, {2->2}, {4->2}, {5->1}}

    // add pairs to priority
    for(auto it: mpp){
        pair<int,int> mpair;
        mpair.first = it.first;
        mpair.second = it.second;
        pq.push(mpair);
    }
    // PQ: {{2->2}, {4->2}, {1->1}, {5->1}}

    // solution vector
    vector<int> result;

    // iterate thru the priorirty queue and then push the top k values {value, freq}
    while(!pq.empty() && k != 0){
        result.push_back(pq.top().first);
        pq.pop();
        k--;
    }

    // {2,4}

    return result;
}


// [MEDIUM] Top K frequent words, given an array of strings words, and integer k, return the k most frequent strings
vector<string> topKFrequent(vector<string> &words, int k){
    // lambda function for custom priority queue comparator (compares strings with frequences, if same freq, sorts by lexicoggraphiclly)
    auto cmp = [](const pair<string, int>&a, const pair<string, int>&b){
        // {string, freq}
        // if not same same freq
        if(a.second != b.second)
            return a.second < b.second;
        // if freq are the same, sort by lexicograph string
        return a.first > b.first;
    };
    
    // return the answer sorted by frequency from highest to lowest. SOrt the words with the same frewuencey by lexogrpahy order.


    // same approach as ints, when got reuslt array, sort the words by lexicography

    int n = words.size();
    unordered_map<string, int> mpp;
    for(auto word: words){
        mpp[word]++;
    } 

    // setup priority queue
    priority_queue<pair<string, int>, vector<pair<string, int>>, decltype(cmp)> my_pq(cmp);

    // push each mapped pair into priority queue
    for(auto it: mpp){
        pair<string, int> p;
        p.first = it.first;
        p.second = it.second;
        my_pq.push(p);
    }

    // setup result array, and add k frewuent elements to it
    vector<string> topK;
    while(!my_pq.empty() && k != 0){
        topK.push_back(my_pq.top().first);
        // pop and go to next highest freq string
        my_pq.pop();
        k--;
    }

    return topK;

}


// [MEDIUM]
// Given an unosrted array of integers nums, return the length of the longest consecutive elements sequence
int longestConsecutive(vector<int>&nums){
    // unordered set approach
    int n = nums.size();
    unordered_set<int> st;
    // add all numbers to set. Unique numbers only
    for(auto num: nums){
        st.insert(num);
    }

    // Iterate thru the set, finding the starting sequence
    int longest = 0;
    for(auto num: st){
        // if found the starting number, start counting sequence
        if(st.find(num-1)==st.end()){
            int x = num;
            int cnt = 1;
            while(st.find(x+1) != st.end()){
                x++;
                cnt++;
            }
            longest = max(cnt, longest);
        }
    }

    return longest;

}


/















int main(){
    // vector<string> a = {"i","love","leetcode","i","love","coding"};    
    // // int res = singleElement(a);
    // // cout << res << endl;

    // // vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    // // setZeroes(matrix);

    // // sortColors(a);
    // // vector<string> res = topKFrequent(a, 2);
    // vector<char> b = {'a','a','b','b','c','c','c'};
    // int res = compress(b);


}