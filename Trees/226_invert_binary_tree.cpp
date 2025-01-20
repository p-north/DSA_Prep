#include<bits/stdc++.h>
using namespace std;

// Solution
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root){
            return nullptr;
        }

        // Postorder traversal, at the end, return root after swapping nodes
        TreeNode* left = invertTree(root->left);
        TreeNode* right = invertTree(root->right);


        // change up right and left nodes using temp variable
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        // return changed root
        return root;
        
    }
};

int main()
{
    /*
        Level: Easy
        Problem: Given the root of a binary tree, invert the tree and return its root.
        Link:https://leetcode.com/problems/invert-binary-tree/description/
    
    */
 
    return 0;
}