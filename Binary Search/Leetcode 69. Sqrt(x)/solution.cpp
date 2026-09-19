class Solution {
public:
    int mySqrt(int x) {
    int i=0;
    int j=x;
    int ans=1;
    while(i<=j){
        long long mid=i+((j-i)/2);
        if(mid*mid==x){
            ans=mid;
            break;
        }
        else if(mid*mid<x){
            ans=mid;
            i=mid+1;
        }
        else j=mid-1;
    }
    return ans;
    }
};
