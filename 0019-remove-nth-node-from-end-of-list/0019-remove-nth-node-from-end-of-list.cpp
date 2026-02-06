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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;

        for(int i=0;i<n;i++) fast = fast->next;
        if(fast==nullptr) return head->next; // which means n is equal to size of the linkedlist

        while(fast->next!=nullptr){ // slow will point to one node before nth Node
            slow=slow->next;
            fast=fast->next;
        }

        ListNode* toBeDeleted = slow->next;
        slow->next = slow->next->next;
        delete(toBeDeleted);

        return head;
    }
};