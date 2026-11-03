class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int maxm=INT_MIN;
        for(int i=0;i<n;i++){
            maxm=max(nums[i],maxm);
        }
        int moves=0;
        for(int i=0;i<n;i++){
            moves+=(maxm-nums[i]);
        }
        return moves;
    }
};
