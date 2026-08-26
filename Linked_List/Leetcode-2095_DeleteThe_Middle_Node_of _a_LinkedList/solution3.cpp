class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL||head->next==NULL) return NULL;
        ListNode*fast=head;
        ListNode*slow=head;
        ListNode*prev=head;
        while(fast!=NULL&&fast->next!=NULL){
            
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;

        }
        prev->next=slow->next;
        return head;
    }
};
