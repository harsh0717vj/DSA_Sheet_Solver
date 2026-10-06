class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        stack<int>st;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
                count++;
            }
            else{
                if(!st.empty()){
                    st.pop();
                    count--;
                }
                else count++;
            }
        }
        return count;
    }
};
