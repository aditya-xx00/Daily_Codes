class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==1 || n==0)
        return n;
        int maxi=1;
        int len=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i-1]+1==nums[i])
             {
               len++;
               maxi=max(maxi,len);
             }
            else if(nums[i-1]==nums[i]);
            else
                len=1;
        }
        return maxi;
    }
};