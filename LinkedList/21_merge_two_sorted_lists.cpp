#include<bits/stdc++.h>
using namespace std;

// Extra space solution O(n)
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // handle edge cases first
        if(list1 == NULL){
            return list2;
        }
        // case when list 2 null, return list1
        else if(list2 == NULL){
            return list1;
        }
        // case when both empty/null, return a nullptr
        else if(list1 == NULL && list2 == NULL){
            return nullptr;
        }

        // dummy node
        ListNode dummy(0);
        ListNode* node = &dummy;

        // iterate through linkedlist, adding values to dummynode
        while(list1 && list2){
            int val1 = list1->val;
            int val2 = list2->val;
            if(val1 < val2){
                node->next = list1;
                list1 = list1->next;
            }
            else{
                node->next = list2;
                list2 = list2->next;
            }

            node = node->next;
        }

        // add remaning nodes
        if(list1){
            node->next = list1;
        }
        else{
            node->next = list2;
        }

        return dummy.next;



        
}


int main()
{
    /*
        Level: Easy
        Problem: You are given the heads of two sorted linked lists list1 and list2. Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
        Link: https://leetcode.com/problems/merge-two-sorted-lists/description/
    
    
    */
 
    return 0;
}