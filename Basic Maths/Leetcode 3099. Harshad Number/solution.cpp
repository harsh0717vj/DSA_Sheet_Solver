class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int orig=x;
        while(x!=0){
            int digit=x%10;
            sum+=digit;
            x/=10;
        }
        if(orig%sum==0) return sum;
        return -1;
    }
};
