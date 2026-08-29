class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL||head->next==NULL) return NULL;
        ListNode*temp=new ListNode(0);
        temp->next=head;
        ListNode*fast=temp;
        ListNode*slow=temp;
        for(int i=0;i<=n;i++){
            fast=fast->next;
        }
        while(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return temp->next;
    }
};
