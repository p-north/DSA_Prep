#include<bits/stdc++.h>
using namespace std;


// optimal solution
ListNode* middleNode(ListNode* head) {
        // empty list
        if(!head){
            return NULL;
        }
        // find the length of ll
        ListNode* temp1 = head;
        // one element
        if(temp1->next == NULL){
            return head;
        }
        // start count
        int cnt = 0;
        while(temp1 != NULL){
            cnt++;
            temp1 = temp1-> next;
        }

        // find the middle node
        // if odd
        if(cnt % 2 != 0){
            cnt = (cnt/2)+1;
        }
        // if even
        else{
            cnt = (cnt/2)+1;
        }
        
        // iterate to the middle and return the node
        // temp head
        ListNode* temp2 = head;
        // val to cross check with length
        int val = 1;
        while(temp2){
            // if the val is middle, return the node
            if(cnt == val){
                return temp2;
            }
            val++;
            temp2 = temp2->next;
        }

        return temp2;
}

int main()
{
 
    return 0;
}