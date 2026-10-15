class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        int n=s.size();
        int freq[26]={0};
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        int maxFreq=INT_MIN;
        char ans;
        for(int i=0;i<26;i++){
            if(freq[i]>maxFreq){
                maxFreq=freq[i];
                ans=i+'a';
            }
            
        }
         
        return ans;
    }
};
Acce
