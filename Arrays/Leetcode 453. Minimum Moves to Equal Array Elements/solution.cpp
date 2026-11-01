class Solution {
public:
    int minMoves(vector<int>& nums) {
        if (nums.empty()) return 0;
        int min_val = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] < min_val) {
                min_val = nums[i];
            }
        }
        int moves = 0;
        for (int i = 0; i < nums.size(); ++i) {
            moves += (nums[i] - min_val);
        }
        return moves;
    }
};
