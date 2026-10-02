class Solution {
public:
    vector<string>ans;
    void solve(string current,int open,int close,int n){ 
        if(open==n&&close==n){
            ans.push_back(current);
            return;
        }
        if(open<n){
            current.push_back('(');
            solve(current,open+1,close,n);
            current.pop_back();
        }
        if(close<open){
            current.push_back(')');
            solve(current,open,close+1,n);
            current.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        int open=0;
        int close=0;
        solve("",open,close,n);
        return ans;
    }
};
