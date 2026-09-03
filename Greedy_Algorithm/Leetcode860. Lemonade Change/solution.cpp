class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int countfive=0;
        int countten=0;
        for(int i=0;i<n;i++){
            if(bills[i]==5) countfive+=1;
            else if(bills[i]==10){
                if(countfive!=0){
                    countfive-=1;
                    countten+=1;
                }
                else return false;
            }
            else{
                if(countfive!=0&&countten!=0){
                    countten-=1;
                    countfive-=1;
                }
                else if(countfive>=3) countfive-=3;
                else return false;
            }
        }
        return true;
    }
};
