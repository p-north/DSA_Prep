#include<iostream>
#include<unordered_set>
using namespace std;

// my solution
// bool isDuplicate(int nums[], int size){
//     // setup boolean
//     // bool isDup = false;


//     //iterate through numsay
//     for(int i = 0; i<size; i++){
//         int num = nums[i];
//         for(int j = i+1; j<size; j++){
//             if(num == nums[j]){
//                 return true;
//             }

//         }
//     }

//     return false;


// }

// optimized solution
bool isDuplicate(int nums[], int size){

    // create a hashset to store all integers
    unordered_set<int> set;

    // iterate over each element
    for(int i = 0; i<size; i++){
        int num = nums[i];
        // check the number in hashset
        if (set.count(num))
        {
            return true;
        }

        
        
        // add the number to hashset
        set.insert(num);


    }

    return false;


}

int main()
{
    int size = 9;
    int nums[size] = {1,2,3,4,5,6,7,8,1};

    bool answer = isDuplicate(nums, size); 
    cout << answer << endl;


 
    return 0;
}