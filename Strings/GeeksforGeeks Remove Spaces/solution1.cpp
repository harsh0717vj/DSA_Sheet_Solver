class Solution {
  public:
    string removeSpaces(string& s) {
        int n=s.size();
        vector<char>st;
        for(int i=0;i<n;i++){
            if(s[i]!=' ') st.push_back(s[i]);
        }
        string str;
        for(int i=0;i<st.size();i++){
            str=str+st[i];
        }
        return str;
    }
};
