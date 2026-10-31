class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        stack<char>st;
        string result;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(!st.empty()){
                    st.push(s[i]);
                    result+="(";
                }
                else st.push(s[i]);
            }
            else{
                st.pop();
                if(!st.empty()) result+=')';
                
            }
        }
        return result;
    }
};
