#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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
int main()
{
    ListNode* head = new ListNode(1);
    ListNode* val1 = new ListNode(2);
    ListNode* val2 = new ListNode(3);
    ListNode* val3 = new ListNode(4);
    ListNode* val4 = new ListNode(5);

    head->next = val1;
    val1->next = val2;
    val2->next = val3;
    val3->next = val4;

    reorderList(head);


    return 0;
}