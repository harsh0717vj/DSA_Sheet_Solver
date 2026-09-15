class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int>ans;
        ListNode*temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            temp->val=ans[i];
            temp=temp->next;
        }
        return head;
    }
};
