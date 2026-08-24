class Solution {
public:
    int sum(int n){
        int s=0;
        while(n!=0){
            int digit=n%10;
            s+=digit;
            n/=10;
        }
        return s;
    }
    int addDigits(int num) {
        while(num>=10){
             num=sum(num);
        }
        
        return num;
    }
};
