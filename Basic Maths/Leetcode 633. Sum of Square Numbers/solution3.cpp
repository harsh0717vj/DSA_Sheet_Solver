class Solution {
public:
    bool isPerfectSquare(long long x){
        long long root=sqrt(x);
        if(root*root==x) return true;
        return false;
    } 
    bool judgeSquareSum(int c) {
        long long root=sqrt(c);
        for(long long i=0;i<=root;i++){
            long long rem=c-(i*i);
            if(isPerfectSquare(rem)) return true;
        }
        return false;
    }
};
