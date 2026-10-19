class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        if(n==0) return "";
        string ans;
        for(int i=0;i<n;i++){
            if(ans.empty()) ans+=s[i];
            else if(s[i]==ans.back()) ans.pop_back();
            else ans+=s[i];
        }
        return ans;
    }
};
