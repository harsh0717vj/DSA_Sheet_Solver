class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        ListNode*temp=head;
        ListNode*prev=head;
        while(head!=NULL&&head->val==val){
            temp=head->next;
            head=temp;
        }
        while(temp!=NULL){
            if(temp->val==val){
                prev->next=temp->next;
                temp=temp->next;
            }
            else{
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    } 
};
