class Solution {
public:
    int minOperations(string s) {
        int n=s.length();
        if(n==1) return 0;
        if(is_sorted(s.begin(),s.end())) return 0;
        if(n==2){
            if(s[0]<s[1]) return 0;
            else return -1;
        }
        int minIdx=INT_MAX;
        char minChar='z';
        int maxIdx=INT_MIN;
        char maxChar='a';
        for(int i=0;i<n;i++){
            if(s[i]<minChar){
                minChar=s[i];
                minIdx=i;
            }
            if(s[i]>maxChar){
                maxChar=s[i];
                maxIdx=i;
            }
        }
        if (s[0] == minChar || s[n - 1] == maxChar) return 1;
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == minChar || s[i] == maxChar) return 2;
        }
        return 3;
    }
};
