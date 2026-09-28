class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int ans=0;
        int x=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') x++;
            if(s[i]==')') x--;
            ans=max(ans,x);
        }
        return ans;
    }
};
