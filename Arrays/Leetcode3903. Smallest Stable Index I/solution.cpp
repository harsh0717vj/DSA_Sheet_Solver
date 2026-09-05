class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1) return n-1;
        int ins=0;
        int maxm=INT_MIN;
        vector<int>result(n);
        result[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            result[i]=min(nums[i],result[i+1]);
        }
        for(int i=0;i<n;i++){
            maxm=max(maxm,nums[i]);
            ins=maxm-result[i];
            if(ins<=k) return i;
        }
        return -1;
    }
};
