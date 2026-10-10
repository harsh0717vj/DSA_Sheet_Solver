class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        long long k = (long long)k1 + k2;

        vector<long long> ans(n);
        long long total = 0;

        for (int i = 0; i < n; i++) {
            ans[i] = abs(nums1[i] - nums2[i]);
            total += ans[i];
        }

        if (k >= total) {
            return 0;
        }

        sort(ans.begin(), ans.end(), greater<long long>());

        long long left = 0, right = ans[0];

        while (left < right) {
            long long mid = left + (right - left) / 2;
            long long needed = 0;

            for (int i = 0; i < n; i++) {
                if (ans[i] > mid) {
                    needed += ans[i] - mid;
                }
            }

            if (needed <= k) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        long long level = left;
        long long used = 0;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            if (ans[i] > level) {
                used += ans[i] - level;
                ans[i] = level;
            }
            sum += ans[i] * ans[i];
        }

        long long remaining = k - used;

        for (int i = 0; i < n && remaining > 0; i++) {
            if (ans[i] == level && level > 0) {
                sum -= ans[i] * ans[i];
                ans[i]--;
                sum += ans[i] * ans[i];
                remaining--;
            }
        }

        return sum;
    }
};
