class Solution {
public:
    int findComplement(int num) {
        string binary="";
        while(num>0){
            int bit=num%2;
            binary+=('0'+bit);
            num/=2;
        }
        reverse(binary.begin(),binary.end());
        int n=binary.length();
        for(int i=0;i<n;i++){
            if(binary[i]=='1') binary[i]='0';
            else binary[i]='1';
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans*2+(binary[i]-'0');
        }
        return ans;
    }
};
