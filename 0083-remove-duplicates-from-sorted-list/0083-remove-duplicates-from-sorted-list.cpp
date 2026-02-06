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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head == nullptr || head->next == nullptr) return head;

        ListNode* temp = head;

        while(temp!=nullptr){
            ListNode* front = temp;
            while(front!=nullptr && front->val == temp->val) front= front->next; // go till front!=null , then only it will go till last node 
            temp->next = front;
            temp= temp->next;
        }

        delete(temp); // free the space
        
        return head;
    }
};