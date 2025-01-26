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
// Optimal solution
class Solution {
public:
    int diameter = 0;
    int maxDepth(TreeNode* root){
        // if nullptr return 0
        if(!root){
            return 0;
        }

        // look at left
        int left = maxDepth(root->left);
        // look at right
        int right = maxDepth(root->right);

        diameter = max(left+right, diameter);

        // return longest subtree
        return max(left, right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {

        maxDepth(root);

        // Add the total depth and return
        return diameter;


        
    }
};

int main()
{
    /*
        Level: Easy
        Problem: Given the root of a binary tree, return the length of the diameter of the tree. The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root. The length of a path between two nodes is represented by the number of edges between them.
        Link: https://leetcode.com/problems/diameter-of-binary-tree/
    
    */
 
    return 0;
}