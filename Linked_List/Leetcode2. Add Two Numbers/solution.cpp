class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode*l3=new ListNode(0);
        ListNode*tail=l3;
        while(l1!=NULL||l2!=NULL||carry!=0){
            int digit1=0;
            if(l1!=NULL) digit1=l1->val;
            else digit1=0;
            int digit2=0;
            if(l2!=NULL) digit2=l2->val;
            else digit2=0;
            int sum=digit1+digit2+carry;
            int digit=sum%10;
            carry=sum/10;
            ListNode*ans=new ListNode(digit);
            tail->next=ans;
            tail=ans;
            if(l1!=NULL) l1=l1->next;
            if(l2!=NULL) l2=l2->next;
        }
        return l3->next;
    }
};
