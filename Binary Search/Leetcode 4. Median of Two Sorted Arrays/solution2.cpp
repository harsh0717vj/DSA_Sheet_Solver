class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();
        if(n1 > n2)
            return findMedianSortedArrays(nums2, nums1);

        int low = 0;
        int high = n1;

        while(low <= high){

            int part1 = low + (high - low) / 2;
            int part2 = (n1 + n2 + 1) / 2 - part1;

            int left1, right1, left2, right2;
            if(part1 == 0)
                left1 = INT_MIN;
            else
                left1 = nums1[part1 - 1];

            if(part1 == n1)
                right1 = INT_MAX;
            else
                right1 = nums1[part1];
            if(part2 == 0)
                left2 = INT_MIN;
            else
                left2 = nums2[part2 - 1];

            if(part2 == n2)
                right2 = INT_MAX;
            else
                right2 = nums2[part2];
            if(left1 <= right2 && left2 <= right1){
                if((n1 + n2) % 2 != 0)
                    return max(left1, left2);
                return (max(left1, left2) + min(right1, right2)) / 2.0;
            }
            else if(left1 > right2){
                high = part1 - 1;
            }
            else{
                low = part1 + 1;
            }
        }

        return 0.0;
    }
};
