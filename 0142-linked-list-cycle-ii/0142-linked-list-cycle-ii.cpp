/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* entry = head;
        if(head ==NULL || head->next==NULL) return NULL;
        while(fast!=NULL && fast->next!=NULL){
                slow= slow->next;
                fast= fast->next->next;
                if(slow==fast){
                    while(slow!=entry){
                        slow= slow->next;
                        entry= entry->next;  // L1 =  L3 + (L2+ L3)*n
                        // n - no of cycles need to reach the loop point from L1 =  slow will take to reach the   
                        //meeting point again and again
                    }
                    return entry;
                } 
        }

        return NULL;

    }

    };


// link - https://leetcode.com/problems/linked-list-cycle-ii/solutions/3274900/image-explanation-o-1-space-complete-detailed-intution