class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.length();
        stack<int>st;
        vector<bool>idx(n,true);
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(!st.empty()) st.pop();
                else{
                    idx[i]=false;
                }
            }
        }
        while(!st.empty()){
            idx[st.top()]=false;
            st.pop();
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(idx[i]) ans+=s[i];
        }
       return ans;  
    }
};
