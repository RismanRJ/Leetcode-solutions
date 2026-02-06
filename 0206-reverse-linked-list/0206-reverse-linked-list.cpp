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
    ListNode* reverseList(ListNode* head) {

        if(head == nullptr || head->next ==  nullptr) return head; // for single ele case & base case

        ListNode* newHead = reverseList(head->next);
        ListNode* front = head->next; // 1(head) -> 2(front)
        front->next = head; // 2(front) -> 1(head)->2(front)
        head->next = nullptr; // 2(front)->1(head)->nullptr
        return newHead; // newHead
    }
};