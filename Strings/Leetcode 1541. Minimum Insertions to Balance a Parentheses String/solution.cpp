class Solution {
public:
    int minInsertions(string s) {
        int n=s.length();
        int balance=0;
        int insert=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') balance++;
            else{
                if(balance==0){
                    insert++;
                    balance++;   
                }
                if(i+1<n&&s[i+1]==')') i++;
                else insert++;
                balance--;
            }
        }
        insert+=balance*2; 
        return insert;
    }
};
