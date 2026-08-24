class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL) return NULL;
        int size=0;
        ListNode*len=head;
        while(len!=NULL){
            len=len->next;
            size++;
        }
        if(size==1) return NULL;
        int mid=size/2;
        ListNode*temp=head;
        ListNode*prev=head;
        int i=0;
        while(temp!=NULL&&i<=size){
            if(i==mid){
                prev->next=temp->next;
                temp = temp->next;
            }
            else{
                prev=temp;
                temp=temp->next;
            }
            i++;
        }
        return head;
    }
};
