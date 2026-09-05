class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1) return n-1;
        int ins=0;
        int maxm=INT_MIN;
        vector<int>rightmin(n);
        rightmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            rightmin[i]=min(nums[i],rightmin[i+1]);
        }
        for(int i=0;i<n;i++){
            maxm=max(maxm,nums[i]);
            ins=maxm-rightmin[i];
            if(ins<=k) return i;
        }
        return -1;
    }
};
