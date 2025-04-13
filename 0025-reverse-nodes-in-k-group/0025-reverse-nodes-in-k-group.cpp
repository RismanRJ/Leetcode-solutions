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
ListNode* reverseLL(ListNode* head){
    ListNode* prev= NULL;
    ListNode* curr= head;
    while(curr!=NULL){
        ListNode* next = curr->next;
        curr->next=prev;
        prev = curr;
        curr= next;
    }
    return prev;
}

ListNode * findKthNode(ListNode* head , int k){
    ListNode* kThNode = head;
    k--;
    while(kThNode!=NULL && k--)
    {
        kThNode= kThNode->next;
    }
    return kThNode;
}
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevNode = NULL;
        while(temp!=NULL){
            ListNode* kNode = findKthNode(temp,k);
            if(kNode==NULL){
                if(prevNode)prevNode->next= temp;
                break;
            }
            ListNode* nextNode = kNode->next;
            kNode->next=NULL;

             reverseLL(temp);
            if(temp==head){
                head = kNode;
            }
            else{
            prevNode->next= kNode; // it will work from the second k group onwards
            }

            prevNode =temp;
            temp= nextNode;
        }


        return head;
    }
};