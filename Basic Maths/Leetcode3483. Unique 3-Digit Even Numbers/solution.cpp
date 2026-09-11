class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int>numbers;
        int n=digits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i==j||i==k||k==j) continue;
                    else if(digits[i]==0) continue;
                    else if(digits[k]%2!=0) continue;
                    else{
                        int number=digits[i]*100+digits[j]*10+digits[k];
                        numbers.insert(number);
                    }
                    
                }
            }
        }
        return numbers.size();
    }
};
