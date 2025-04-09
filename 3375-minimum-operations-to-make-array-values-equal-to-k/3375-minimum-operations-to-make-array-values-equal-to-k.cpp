class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
     int cnt = 0;
        sort(nums.rbegin(),nums.rend());

        if(nums[nums.size()-1] < k) return -1;

        int i = 1;
        while(i < nums.size()){
            if(nums[i] != nums[i-1]) cnt++;
            i++;
        }
        return (nums[nums.size()-1] == k) ? cnt : cnt+1;   
    }
};