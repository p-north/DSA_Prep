#include<bits/stdc++.h>
using namespace std;

// Optimal solution
 ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr != nullptr){
            // create temp variable to store curr.next
            ListNode* temp = curr->next;
            // move curr.next ptr to prev node
            curr->next = prev;
            // increment prev ptr to next one
            prev = curr;
            // move curr to next position
            curr = temp;
        }
        // return reversed head
        return prev;
        
}

int main()
{
    /*
        Level: Easy
        Problem: Given the head of a singly linked list, reverse the list, and return the reversed list.
        Link: https://leetcode.com/problems/reverse-linked-list/description/

    */
    return 0;
}