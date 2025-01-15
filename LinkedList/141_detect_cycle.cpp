#include<iostream>
using namespace std;

// Brute force hashap solution
bool hasCycle(ListNode *head) {

        // want to detect cycle in LL
        // if cycle return true
        // if no cycle return false
        // handle edge cases first
        if(head == nullptr){
            return false;
        }
        if(head->next == nullptr){
            return false;
        }

        //continue if head not null or not one element

        ListNode* temp = head;

        // hash tabe technique
        // instead of storing the values, store the pointers instead

        unordered_map<ListNode*, int> ump;
        while(temp){
            // ump does store the node, means cycle
            if(ump.find(temp) != ump.end()){
                return true;
            }
            // else it does not exist
            else{

               ump[temp]++;
            }
            temp = temp->next;

        }

        return false;

        
}

int main()
{
    /*
        Level: Easy
        Problem: Given head, the head of a linked list, determine if the linked list has a cycle in it.There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter. Return true if there is a cycle in the linked list. Otherwise, return false.
        Link: https://leetcode.com/problems/linked-list-cycle/description/
    
     
    */
 
    return 0;
}