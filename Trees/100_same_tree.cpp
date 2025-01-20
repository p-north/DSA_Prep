#include<bits/stdc++.h>
using namespace std;


// Solution
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // edge cases
        // both nullptr
        if(!p && !q){
            return true;
        }
        else if(!p && q){
            return false;
        }
        else if(p && !q){
            return false;
        }


        //Pre order traversal
        // get the node value at each root
        bool root;
        // if val the same, true
        if(p->val == q->val){
            root = true;
            
        }
        // if not the same val, false
        else{
            root = false;
        }
        // check left sub-tree
        bool left = isSameTree(p->left, q->left);
        // check right-subtree
        bool right = isSameTree(p->right, q->right);

        // make sure all subtree are the same
        return root && left && right;




        
    }
};
int main()
{
    /*
        Level: Easy
        Problem: Given the roots of two binary trees p and q, write a function to check if they are the same or not. Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.
        Link: https://leetcode.com/problems/same-tree/description/
    */
 
    return 0;
}