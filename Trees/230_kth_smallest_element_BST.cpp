#include<bits/stdc++.h>
using namespace std;




// Brute force solution
vector<int> values(TreeNode* root){
        /*
            -Brute force solution
            - Traverse through the tree, adding all values into a vector nums
            - Sort afterwards and return the nums[k-1]
            [3,1,4,null,2] k = 1;
            {}
            {3,1,4,2} -> {1,2,3,4}
            nums[k-1] = 1
        */

        vector<int> res;
        if(!root){
            return res;
        }

        res.push_back(root->val);
        vector<int> left = values(root->left);
        vector<int> right = values(root->right);

        res.insert(res.end(), left.begin(), left.end());
        res.insert(res.end(), right.begin(), right.end());

        return res;
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> nums = values(root);
        sort(nums.begin(), nums.end());
        return nums[k-1];
        
}

int main()
{
    /*
        Level: Medium
        Problem: Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.
        Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/
    
    */
 
    return 0;
}