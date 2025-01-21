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
    bool checkSubtree(TreeNode* root, TreeNode* subroot){
        // both null, return true
        if(!root && !subroot){
            return true;
        }
        // one of null, reutrn false
        if(!root || !subroot){
            return false;
        }
        // if root val is not the same, return false
        if(root->val != subroot->val){
            return false;
        }


    


        // ensure the tree matches
        return checkSubtree(root->left, subroot->left) && checkSubtree(root->right, subroot->right);
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // helper function
        /*
            -Helper function
            - When the root->val == subroot->val, explore the tree, making sure each node matches up.

        
        */
        // null root
        if(!root){
            return false;
        }
        // check is root subtree
        if(checkSubtree(root, subRoot)){
            return true;
        }
        // else check if left or right subtrees
        else{
            return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);     
        }
 
    }
};

int main()
{
    /*
        Level: Easy
        Problem: https://leetcode.com/problems/subtree-of-another-tree/description/
        Link: Given the roots of two binary trees root and subRoot, return true if there is a subtree of root with the same structure and node values of subRoot and false otherwise. A subtree of a binary tree tree is a tree that consists of a node in tree and all of this node's descendants. The tree tree could also be considered as a subtree of itself.
    
    */
    return 0;
}