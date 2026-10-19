class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int low=0;
        int high=n-1;
        int start=0;
        vector<int>ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                start=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        while(start<n&&nums[start]==target){
            ans.push_back(start);
            start++;
        }
        return ans;
    }
};
