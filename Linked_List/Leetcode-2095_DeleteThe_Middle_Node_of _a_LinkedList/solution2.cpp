class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL) return NULL;
        int size=0;
        ListNode*len=head;
        while(len!=NULL){
            size++;
            len=len->next;
        }
        if(size==1) return NULL;
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
