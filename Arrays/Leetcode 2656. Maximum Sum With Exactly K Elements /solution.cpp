class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        int maxm=INT_MIN;
        for(int i=0;i<n;i++){
            maxm=max(nums[i],maxm);
        }
        for(int i=1;i<=k;i++){
            ans+=maxm;
            maxm++;
        }
        return ans;
    }
};
