class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        int product1=1;
        for(int i=0;i<n;i++){
            ans[i]=product1;
            product1*=nums[i];
        }
        int product2=1;;
        for(int i=n-1;i>=0;i--){
            ans[i]*=product2;
            product2*=nums[i];
        }
        return ans;
    }
};
