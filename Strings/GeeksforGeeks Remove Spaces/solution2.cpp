class Solution {
  public:
    string removeSpaces(string& s) {
        int n=s.size();
        string str;
        for(int i=0;i<n;i++){
            if(s[i]!=' ') str=str+s[i];
            else continue;
        }
        return str;
    }
};
