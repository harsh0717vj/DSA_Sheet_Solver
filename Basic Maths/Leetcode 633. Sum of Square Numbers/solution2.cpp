class Solution {
public:
    int squareRoot(int x){
        int low=0;
        int high=x;
        int ans=1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid*mid==x){
                ans=mid;
                break;
            }
            else if(mid*mid<x){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
    bool judgeSquareSum(int c) {
        long long i=0;
        long long j=squareRoot(c);
        while(i<=j){
            long long sum=i*i+j*j;
            if(sum==c) return true;
            else if(sum<c) i++;
            else j--;
        }
        return false;
    }
};
