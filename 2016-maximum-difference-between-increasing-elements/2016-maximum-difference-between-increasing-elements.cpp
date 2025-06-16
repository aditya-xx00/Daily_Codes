class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                ans = max(ans,nums[j] - nums[i]);
            }
        }
        return ans;
    }
};