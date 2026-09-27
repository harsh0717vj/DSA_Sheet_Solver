class Solution {
public:
    int findComplement(int num) {
        int ans=0;
        long long place=1;
        while(num>0){
            int bit=num%2;
            if(bit==1) bit=0;
            else bit=1;
            ans=ans+bit*place;
            place=place*2;
            num/=2;
        }
        return ans;
    }
};
