class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        int open=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open++;
                count++;
            }
            else{
                if(open>0){
                    open--;
                    count--;
                }
                else count++;
            }
        }
        return count;
    }
};
