class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        if(n==0) return "";
        
        stack<char>st;
        for(int i=0;i<n;i++){
            if(st.empty()) st.push(s[i]);
            else if(s[i]==st.top()) st.pop();
            else st.push(s[i]);
        }
        string ans;
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
