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
    ListNode* headNode;
    Solution(ListNode* head) {
        headNode=head;
    }
    
    int getRandom() {
        int res, n=1;
        ListNode* curr= headNode;
        while(curr){
            if(rand()%n==0) res= curr->val; // reserviour sampling
            n++;
            curr= curr->next;
        }

        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */