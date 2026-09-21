class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size(); 
        int i = 0;
        int j = n - 1;
        int pivot = -1;

        // Step 1: Find pivot safely
        while (i <= j) {
            int mid = i + (j - i) / 2;

            if (mid < n - 1 && nums[mid] > nums[mid + 1]) {
                pivot = mid + 1;
                break;
            } 
            else if (mid > 0 && nums[mid - 1] > nums[mid]) {
                pivot = mid;
                break;
            } 
            else if (nums[mid] >= nums[i]) {
                i = mid + 1;
            } 
            else {
                j = mid - 1;
            }
        }

        // Step 2: Binary search in correct half
        int k, l;
        if (pivot == -1) {  // not rotated
            k = 0;
            l = n - 1;
        } 
        else if (target >= nums[0] && target <= nums[pivot - 1]) {
            k = 0;
            l = pivot - 1;
        } 
        else {
            k = pivot;
            l = n - 1;
        }

        // Standard binary search
        while (k <= l) {
            int mid1 = k + (l - k) / 2;
            if (nums[mid1] == target) return mid1;
            else if (target < nums[mid1]) l = mid1 - 1;
            else k = mid1 + 1;
        }

        return -1;
    }
};
