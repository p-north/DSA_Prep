#include<bits/stdc++.h>
using namespace std;


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool foo(TreeNode* root,  long long min, long long max){
        // nullptr
        if(!root){
            return true;
        }
        // if tree matches BST, check left and right subtrees
        if(root->val < max && root->val > min){
            return foo(root->left, min, root->val) && foo(root->right, root->val, max);
            
        }
        //return false if not valid BST 
        else{
            return false;
        }

        

    }
    bool isValidBST(TreeNode* root) {
        // Store MIN, MAX variables.
        long long MIN = LONG_LONG_MIN;
        long long MAX = LONG_LONG_MAX;
       return foo(root, MIN, MAX);  
    }
};

int main()
{
    /*
        Level: Medium
        Problem: Given the root of a binary tree, determine if it is a valid binary search tree (BST).
        Link: https://leetcode.com/problems/validate-binary-search-tree/description/
    
    
    */
 
    return 0;
}