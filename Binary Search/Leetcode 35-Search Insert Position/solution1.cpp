class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int idx;
        for(int i=0;i<n;i++){
            if(nums[i]>=target){
                idx=i;
                break;
            }
            
        }
        return idx;
    }
};
