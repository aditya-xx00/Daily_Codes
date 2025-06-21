class Solution {
public:
    int mod = 1e9 + 7;
    vector<int> pow2;

    int countSubseq(vector<int>& nums, int l, int r) {
        if (l > r) return 0;

        if (nums[l] + nums[r] > target)
            return countSubseq(nums, l, r - 1);  // discard the largest

        // nums[l] + nums[r] <= target
        int count = pow2[r - l];  // 2^(r - l) subsequences are valid
        count = (count + countSubseq(nums, l + 1, r)) % mod;  // continue with next left
        return count;
    }

    int target;

    int numSubseq(vector<int>& nums, int t) {
        sort(nums.begin(), nums.end());
        target = t;
        int n = nums.size();

        // Precompute 2^i mod MOD
        pow2 = vector<int>(n + 1, 1);
        for (int i = 1; i <= n; ++i) {
            pow2[i] = (pow2[i - 1] * 2LL) % mod;
        }

        return countSubseq(nums, 0, n - 1);
    }
};

