class Solution {
public:
    int guessNumber(int n) {
        int i=1;
        int j=n;
        while(i<=j){
            int mid=i+(j-i)/2;
            int res=guess(mid);
            if(res==0) return mid;
            else if(res>0) i=mid+1;
            else j=mid-1;
        }
        return -1;
    }
};
