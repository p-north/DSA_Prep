#include<bits/stdc++.h>
using namespace std;


// Sub optimal solution
 ListNode* removeNthFromEnd(ListNode* head, int n) {
        /*
            -Grab the length of Linked List O(1)
            -Node to delete (O-indexed) = (length - n)
            -iterate thorough LL once reached node-1, cut it off
        
        */

        // edge cases
        if(head == nullptr){
            return nullptr;
        }
        if(head->next == nullptr && n == 1){
            head = head->next;
            return head;
        }

        // temporary head
        ListNode* temp = head;

        int length = 0;
        while(temp){
            temp = temp->next;
            length++;
        }

        // node to delete
        int nodeToDelete = (length-n);

        // if node to delete is head
        if(nodeToDelete == 0){
            head = head->next;

        }

        // iterate thorough LL once reached node-1, cut it off
        int tempCount = 0;
        ListNode* temp2 = head;
        while(temp2){
            if(tempCount == nodeToDelete - 1){
                temp2->next = temp2->next->next;
                break;
            }
            else{
                temp2 = temp2->next;
                tempCount++;
            }
        }

        return head;
        
}

int main()
{
    /*
        Level: Medium
        Problem: Given the head of a linked list, remove the nth node from the end of the list and return its head.
        Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
    */
   
 
    return 0;
}