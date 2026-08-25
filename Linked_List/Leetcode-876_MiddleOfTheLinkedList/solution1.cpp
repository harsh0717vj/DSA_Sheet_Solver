class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL) return NULL;
        int size=0;
        ListNode*len=head;
        while(len!=NULL){
            size++;
            len=len->next;
        }
        int mid=size/2;
        ListNode*temp=head;
        for(int i=0;i<=mid-1;i++){
            temp=temp->next;
        }
        head=temp;
        return head;
    }
};
