class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        vector<int> rightMax(n), leftMax(n);

        // Fill rightMax (max height to the right of each position, including itself)
        int maxRight = height[n - 1];
        for (int i = n - 1; i >= 0; i--) {
            maxRight = max(height[i], maxRight);
            rightMax[i] = maxRight;
        }

        // Fill leftMax (max height to the left of each position, including itself)
        int maxLeft = height[0];
        for (int i = 0; i < n; i++) {
            maxLeft = max(height[i], maxLeft);
            leftMax[i] = maxLeft;
        }

        // Calculate trapped water
        int res = 0;
        for (int i = 0; i < n; i++) {
            int waterLevel = min(leftMax[i], rightMax[i]);
            if (waterLevel - height[i] > 0) {
                res += waterLevel - height[i];
            }
        }
        return res;
    }
};
