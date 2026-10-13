class Solution {
public:
    int nthUglyNumber(int n) {
        int count=0;
        int i=1;
        while(count<n){
            int temp=i;
            while(temp%2==0){
                temp=temp/2;
            }
            while(temp%3==0){
                temp=temp/3;
            }
            while(temp%5==0){
               temp=temp/5;
            }   
            if(temp == 1) {
                count++;
                if(count == n) return i;
            }
            i++;
        }
        return count;
    }
};
