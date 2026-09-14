class Solution {
public:
ListNode* sortList(ListNode*a){
    vector<int>list;
    ListNode*temp=a;
    while(temp!=NULL){
        list.push_back(temp->val);
        temp=temp->next;
    }
    sort(list.begin(),list.end());
    temp=a;
    for(int i=0;i<list.size();i++){
        temp->val=list[i];
        temp=temp->next;
    }
    return a;
}
ListNode*mergeList(ListNode*A,ListNode*B){
    ListNode*dummy=new ListNode(0);
    ListNode*temp=dummy;
    while(A!=NULL&&B!=NULL){
        if(A->val<=B->val){
            temp->next=A;
            A=A->next;
        }
        else{
            temp->next=B;
            B=B->next;
        }
        temp=temp->next;
    }
    if(A!=NULL) temp->next=A;
    else temp->next=B;
    return dummy->next;
}
ListNode* merge(ListNode*a,ListNode*b){
    int n1=0;
    ListNode*len=a;
    while(len!=NULL){
        n1++;
        len=len->next;
    }
    int n2=0;
    ListNode*len2=b;
    while(len2!=NULL){
        n2++;
        len2=len2->next;
    }
    ListNode*A=sortList(a);
    ListNode*B=sortList(b);
    ListNode*C=mergeList(A,B);
    return C;
    }
};
