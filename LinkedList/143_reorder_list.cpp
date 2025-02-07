#include<bits/stdc++.h>
using namespace std;


// Optimal Stack + Two ptr solution
class Solution {
    public:
        void reorderList(ListNode* head) {
            // edge cases
            if(!head){
                return;
            }
            // given a list
    
            // reorder the list in the specified format
    
            // stack approach?
            stack<ListNode*> st;
    
            // get the last ndoe
            ListNode* last;
    
            // get the length of the LL, while adding to the stack
            int length = 0;
            ListNode* temp = head;
            while(temp){
                temp=temp->next;
                length++;
            }
    
            // position to stop at when linking nodes
            int n = (length/2)+1;
    
            // go to middle of linkedlist adding items to stack
            temp = head;
            int count = 1;
            while(temp){
                if(count >= n){
                    st.push(temp);
                }
                // when reached middle element disconnect it
                if(count==n){
                    ListNode* t1 = temp;
                    temp = temp->next;
                    t1->next = nullptr;
                    count++;
                    continue;
                }
                temp = temp->next;
                count++;
            }
    
            // only go up until stack empty
            temp = head;
            count = 1;
            while(!st.empty()){
                ListNode* prv = temp;
                temp = temp->next;
                ListNode* point = st.top();
                st.pop();
                prv->next = point;
                if(st.empty()){
                    point->next = nullptr;
                    break;
                }
                point->next = temp;
    
            }
    
    
            
    
    
    
        }
};

int main()
{
    /*
        Level: Medium
            Problem: You are given the head of a singly     linked-list. The list can be represented as: 
                L0 → L1 → … → Ln - 1 → Ln 
            Reorder the list to be on the following form: 
                L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → … 
            You may not modify the values in the list's nodes. Only nodes themselves may be changed.
        Link: https://leetcode.com/problems/reorder-list/description/
    */
 
    return 0;
}