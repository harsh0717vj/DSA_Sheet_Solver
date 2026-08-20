class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        while(num!=0){
            int digit=0;
            if(num%2==0){
                digit=num/2;
                count++;
            }
            else{
                digit=num-1;
                count++;
            }
            num=digit;
        }
        return count;
    }
};
