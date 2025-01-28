#include<bits/stdc++.h>
using namespace std;


//BRUTE FORCE SOLUTION
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    std::string addLargeNumbers(const std::string &num1, const std::string &num2) {
        int carry = 0;
        int i = num1.size() - 1, j = num2.size() - 1;
        std::string result = "";

        while (i >= 0 || j >= 0 || carry) {
            int digit1 = i >= 0 ? num1[i] - '0' : 0;
            int digit2 = j >= 0 ? num2[j] - '0' : 0;

            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            result = (char)(sum % 10 + '0') + result;

            i--;
            j--;
        }

        return result;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // iterate through l1, appending all to string, then reverse it
        ListNode* temp1 = l1;
        string t1 = "";
        //O(n)
        while(temp1){
            int val = temp1->val;
            t1 += to_string(val);
            temp1 = temp1->next;
        }
        // iterate through l2, appending all to string, then reverse it
        ListNode* temp2= l2;
        string t2 = "";
        while(temp2){
            int val = temp2->val;
            t2+=to_string(val);
            temp2 = temp2->next;
        }

        // reverse the strings
        reverse(t1.begin(), t1.end());
        reverse(t2.begin(), t2.end());

        // sum, then reverse the string
        
        string sumString = addLargeNumbers(t1,t2);

        // create a new list
        ListNode* head = new ListNode(sumString.back()-'0');
        sumString.pop_back();

        //add all other numbers
        ListNode* temp = head;
        while(!sumString.empty()){
            char c = sumString.back();
            sumString.pop_back();
            int val = c - '0';
            ListNode* newNew = new ListNode(val);
            temp->next = newNew;
            temp = temp->next;
        }
        return head;  
    }
};

int main()
{
    /*

        Level: Medium
        Problem: You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list. You may assume the two numbers do not contain any leading zero, except the number 0 itself.
        Link: https://leetcode.com/problems/add-two-numbers/description/
    */
 
    return 0;
}