#include<bits/stdc++.h>
using namespace std;


// Solution
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
    bool helper(TreeNode* root, TreeNode* root2){
        // if both null symmteric tree
        if(!root && !root2){
            return true;
        }
        // if one null assymtric
        if(!root || !root2){
            return false;
        }
        // check if values at root same, then pass ptr according to mirror requirement
        return root->val == root2->val && helper(root->left, root2->right) && helper(root->right, root2->left);
    

    }
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }

        // Symmetric tree, give left and right child
        return helper(root->left, root->right);
 
    }
};

int main()
{
    /*
        Level: Easy
        Problem: Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
        Link: https://leetcode.com/problems/symmetric-tree/description/
    
    */
 
    return 0;
}