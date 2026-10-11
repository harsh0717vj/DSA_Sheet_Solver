class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int i=1;
        while(i*i<=n){
            if(n%i==0){
                int d=n/i;
                sum+=nums[i-1]*nums[i-1];
                if(d!=i) sum+=nums[d-1]*nums[d-1];
                
            }
            i++;
        }
        return sum;
    }
};
