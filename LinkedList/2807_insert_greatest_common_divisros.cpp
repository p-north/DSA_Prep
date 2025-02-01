#include<bits/stdc++.h>
using namespace std;


//Optimal solution
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    // helper function for greatest common divisor
    int greatestCD(int val1, int val2){
        int divident = val1;
        int divisor = val2;
        while(divident%divisor){
            int temp = divident%divisor;
            divident = divisor;
            divisor = temp;   
        }

        return divisor;

    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        // edge cases one node
        if(!head){
            return nullptr;
        }
        if(!head->next){
            return head;
        }

        // greatest common divisor of two numbers is 
        //  largest positive integer that evenly divides borh numbers
        ListNode* next = head->next;
        ListNode* curr = head;
        while(next){
            int divisor = greatestCD(curr->val, next->val);
            // create a temp node
            ListNode* divValue = new ListNode(divisor);
            // temporary store current node
            ListNode* temp = curr;
            // move original curr
            curr = curr->next;
            // make old point to divisor
            temp->next = divValue;
            // make divisor point to next
            divValue->next = next;
            next = next->next;
        }

        return head;    
    }
};

int main()
{
    /*
    
        Level: Medium
        Problem: Given the head of a linked list head, in which each node contains an integer value. Between every pair of adjacent nodes, insert a new node with a value equal to the greatest common divisor of them. Return the linked list after insertion.
        Link: https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/
    
    */
 
    return 0;
}