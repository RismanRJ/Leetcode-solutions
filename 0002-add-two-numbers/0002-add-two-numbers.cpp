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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry =0 , tot =0;
        
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;  

        while(l1!=nullptr || l2!=nullptr || carry!=0){
            tot =carry; // always append carry to track the left over carry

            if(l1!=nullptr){
                tot+=l1->val;
                l1 = l1->next;
            }
            if(l2!=nullptr){
                tot+=l2->val;
                l2=l2->next;
            }

            int num = tot%10; // num to added in the node - remainder - last digit
            carry = tot/10;
            curr->next = new ListNode(num);
            curr=curr->next;

        }


        return dummy->next;

    }
};