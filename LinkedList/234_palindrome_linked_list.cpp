#include<iostream>
using namespace std;



// Brute force solution O(n+m) space complexity
ListNode* copyList(ListNode* head){
        if(head == nullptr){
            return nullptr;
        }

        // new head
        ListNode* nwHead = new ListNode(head->val);
        ListNode* currentOriginal = head->next;
        ListNode* currentCopy = nwHead;
        while(currentOriginal){
            currentCopy->next = new ListNode(currentOriginal->val);

            //move ptrs forward
            currentCopy = currentCopy->next;
            currentOriginal = currentOriginal->next;
        }

        // return copyhead
        return nwHead;
    }



bool isPalindrome(ListNode* head) {
        // intuition, two pointer technique
        // traverse through regular and reversed linkedlist

        // edge cases
        if(head == nullptr){
            return false;
        }
        // one node
        if(head->next == nullptr){
            return true;
        }

        //-----implementation------//
        // orignial list copied
        ListNode* originalCopy = copyList(head);
    
        
        // reverse LL 
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        // Previous will now be the head
        ListNode* reversedList = prev;

        // iterate through both looking for same values
        while(reversedList && originalCopy){
            if(reversedList->val != originalCopy->val){
                return false;
            }
            else{
                reversedList = reversedList->next;
                originalCopy = originalCopy->next;
            }
        }

        return true;

        
}

int main()
{
    /*
        Level: Easy
        Problem: Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
        Link: https://leetcode.com/problems/palindrome-linked-list/description/
    
    */
 
    return 0;
}