#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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
        while(!next){
            int divisor = greatestCD(curr->val, next->val);
            // create a temp node
            ListNode* divValue = new ListNode(divisor);
            ListNode* temp = curr;
            curr = curr->next;
            temp->next = divValue;
            divValue->next = next;
            next = next->next;
        }

        return head;








        
}
int main()
{
    ListNode* head = new ListNode(18);
    ListNode* val1 = new ListNode(6);
    ListNode* val2 = new ListNode(10);
    ListNode* val3 = new ListNode(3);

    head->next = val1;
    val1->next = val2;
    val2->next = val3;

    ListNode* temp = insertGreatestCommonDivisors(head);


 
    return 0;
}