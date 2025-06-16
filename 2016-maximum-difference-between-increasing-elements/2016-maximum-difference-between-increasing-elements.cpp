class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = INT_MIN;
        bool flag = true;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] < nums[j]){
                    ans = max(ans,nums[j] - nums[i]);
                    flag = false;
                }
            }
        }
        if(flag) return -1;
        return ans;
    }
};