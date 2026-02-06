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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == nullptr and headB == nullptr) return headA;

        ListNode* t1 = headA;
        ListNode* t2 = headB;

        // 1 ->2-> 3 A
        // 3->1->2 B // both will be connected d steps apart from each other
        //so if any of the node reaches switched to another track , so non nullPtr Node have d step behind with null node , after d steps they will align in a same point


        while(t1!=t2){
            t1= t1->next;
            t2= t2->next;

            if(t1==t2)return t1;
            if(t1==nullptr)t1=headB;
            if(t2==nullptr) t2=headA;
        }

        return t1;


        
    }
};