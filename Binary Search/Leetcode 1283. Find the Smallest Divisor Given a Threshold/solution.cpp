class Solution {
public:
    bool check(vector<int>&nums,int mid,int threshold){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int div=(nums[i]+mid-1)/mid;
            sum+=div;
        }           
        if(sum<=threshold) return true;
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int maxval=INT_MIN;
        for(int i=0;i<n;i++){
            maxval=max(nums[i],maxval);
        }
        int low=1;
        int high=maxval;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(nums,mid,threshold)){
                ans=mid;
                high=mid-1;             
            }
            else low=mid+1;
        }
        return ans;
    }
};
