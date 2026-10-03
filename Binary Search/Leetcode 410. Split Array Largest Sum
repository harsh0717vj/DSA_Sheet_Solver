class Solution {
public:
    bool check(vector<int>&nums,int mid,int k){
        int n=nums.size();
        int sum=0;
        int parts=1;
        for(int i=0;i<n;i++){
            if(sum+nums[i]>mid){
                parts++;
                sum=nums[i];
            }
            else sum+=nums[i];
        }
        if(parts<=k) return true;
        else return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int maxele=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            maxele=max(nums[i],maxele);
            sum+=nums[i];
        }
        int low=maxele;
        int high=sum;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(nums,mid,k)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
