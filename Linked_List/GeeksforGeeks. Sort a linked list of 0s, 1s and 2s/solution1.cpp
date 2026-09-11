class Solution {
  public:
    Node* segregate(Node* head) {
        int n=0;
        Node*size=head;
        while(size!=NULL){
            n++;
            size=size->next;
        }
        vector<int>LL;
        Node*temp=head;
        while(temp!=NULL){
            LL.push_back(temp->data);
            temp=temp->next;
        }
        temp=head;
        sort(LL.begin(),LL.end());
        for(int i=0;i<n;i++){
            temp->data=LL[i];
            temp=temp->next;
        }
        return head;
    }
};
