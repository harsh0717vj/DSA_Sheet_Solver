class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        int balance=0;
        string result;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(balance>0) result+='(';
                balance++;
            }
            else{
                balance--;
                if(balance>0) result+=')';
            }
        }
        return result;
    }
};
