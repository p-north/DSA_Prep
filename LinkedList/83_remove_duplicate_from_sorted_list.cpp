#include<iostream>
using namespace std;


// two ptr solution
ListNode* deleteDuplicates(ListNode* head) {
        // edge cases
        if(!head){
            return nullptr;
        }
        if(!head->next){
            return head;

        }
        // fast and slow pointer technique
        ListNode* curr = head;
      

        while(curr != nullptr && curr->next != nullptr){
            // if duplicate val found, skip it
            if(curr->val == curr->next->val){
                curr->next = curr->next->next;
            }
            // else move to next node
            else{
                // increment
                curr = curr->next;            
            }
        }
        return head;
}


int main()
{
    /*
        Level: Easy
        Problem: Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
        Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
    
    */
 
    return 0;
}