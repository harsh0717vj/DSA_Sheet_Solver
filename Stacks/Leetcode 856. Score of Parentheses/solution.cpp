class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.length();
        stack<int>st;
        st.push(0);
        int inside=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(0);
            }
            else{
                int inside=st.top();
                st.pop();
                int value;
            if(inside==0) value=1;
            else value=2*inside;
            st.top()+=value;
            }
        }
        return st.top();
    }
};
