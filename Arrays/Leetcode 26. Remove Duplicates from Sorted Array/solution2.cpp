class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int i=0;
        int j=1;
        int index=1;
        while(i<n&&j<n){
            if(nums[i]!=nums[j]){
                nums[index]=nums[j];
                index++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return index;
    }
};
