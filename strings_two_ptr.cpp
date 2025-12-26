// [MEDIUM] String compresion
//  Given an array of characters chars, compress it using the following algorithm
// For each group of consecutive repeating chars, if the group lengh is 1, append the chracters to string
// Other wise, append the character followed by the group' length
#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>&chars){
    int n = chars.size();
    int i = 0;
    int j = i+1;
    vector<char> st;
    // only one element
    if(n==1){
        st.push_back(chars[0]);
        chars.insert(chars.begin(), chars[0]);
        return st.size();
    }
    int cnt=1;
    while(1){
        if(j==n){
            st.push_back(chars[i]);
            // single digit
            if(cnt > 1 && cnt < 10){
                st.push_back(cnt+'0');
            }
            else if(cnt > 9){
                string s = to_string(cnt);
                for(auto ch: s){
                    st.push_back(ch);
                }
            }
            break;
        }
        
        else if(chars[j] == chars[i]){
            cnt++;
            j++;
            continue;
        }
        // add the cnt and char to vector
        st.push_back(chars[i]);
        // single digit
        if(cnt > 1 && cnt < 10){
            st.push_back(cnt+'0');
        }
        else if(cnt > 9){
                string s = to_string(cnt);
                for(auto ch: s){
                    st.push_back(ch);
                }
        }
        i=j;
        j++;
        cnt=1;
    }


    // at the end append to chars
    for(int i = st.size()-1; i>=0; i--){
        char ch = st[i];
        chars.insert(chars.begin(), ch);
    }

    // return the length of result array
    return st.size();
}


// valid palindrome
// if word reads the same forwards and backwards
bool isPalindrome(string s){
    
    // remove all spaces
    string temp;
    for(auto ch: s){
        if(isalpha(ch)){
            char dw = tolower(ch);
            temp.push_back(dw);
        }
        else if(isdigit(ch)){
            temp.push_back(ch);
        }
    }

    if (temp.size()==0){
        return 1;
    }


    int n = temp.size();
    int i = 0;
    int j = n-1;

    while(i < j){
        if(temp[i] != temp[j]){
            return 0;
        }
        i++;
        j--;
    }



    return 1;
}


// [MEDIUM] -> Two Sum 2 Input array is sorted
// Given an array of ints, sorted in non-decreasing order, find two numbers such that they add up to a specific target.
vector<int> twoSum(vector<int>& numbers, int target){
    int n = numbers.size();
    vector<int> res;

    // two pointer technique
    // iterate thur the array, i -> 0th idx, j -> n-1 idx
    // if i+j < target, i++
    // if i+j > target, j++
    // if i+j = target, break
    int i = 0;
    int j = n-1;
    while(i<j){
        int val = numbers[i]+numbers[j];
        if(val<target){
            i++;
        }
        else if(val > target){
            j--;
        }
        else{
            res.emplace_back(i+1);
            res.emplace_back(j+1);
            break;
        }
    }


    return res;
}

// [MEDIUM]
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i!=j, i!=k, j!=k
// nums[i] + nums[j] + nums[k] == 0;
vector<vector<int>> threeSum(vector<int>&nums){
    int n = nums.size();
    int target = 0;
    vector<vector<int>> res;
    // early case for only 3 elements
    if(n==3){
        if(nums[0]+nums[1]+nums[2]==target){
            res.push_back(nums);
        }
        return res;
    }

    // sorting + two-ptr + set technique
    set<vector<int>> st;
    sort(nums.begin(), nums.end());

    // two ptr technique
    for(int i = 0; i<n; i++){
        int j = i+1;
        int k = n-1;
        while(j<k){
            // calcualte val
            int val = nums[i]+nums[j]+nums[k];

            // if value is too high, deceremnt k ptr
            if(val > target){
                k--;
            }
            // if value less than target, move j ptr up
            else if(val < target){
                j++;
            }
            // else found target value
            else{
                vector<int> tar = {nums[i], nums[j], nums[k]};
                st.insert(tar);
                j++;
                k--;
            }
        }
    }

    // add to result vector
    for(auto arr: st){
        res.emplace_back(arr);
    }



    return res;


}

// MEDIUM:
// Container with most water
// Given an integer array hieght of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i,0) and (i,hieght[i])

// Find the two lines that together with x-axis form a container such that the container contians the most water.
// return the maximum amount of water a container can store.
int maxArea(vector<int>& height){
    int n = height.size();
    int i= 0;
    int j=n-1;
    int max = INT_MIN;
    while(i<j){
        int area = min(height[i], height[j]) * (j-i);
        max = max(area, max);
        // increment i if its less than j
        if( height[i] < height[j] ){
            i++;

        }
        else{
            j--;
        }
    }

    return max;

}











int main(){
    bool res = isPalindrome("A man, a plan, a canal: Panama");
    cout<<res << endl;
}




