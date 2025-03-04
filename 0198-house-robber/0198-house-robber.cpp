class Solution {
public:
    int chor(vector<int> nums,int n,vector<int>&t){
        if(n<0) return 0;
        if(n==0) return t[n]=nums[0];
        if(t[n]!=-1)
         return t[n];
        return t[n]=max(nums[n]+chor(nums,n-2,t),chor(nums,n-1,t));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>t(n,-1);
        return chor(nums,n-1,t);
    }
};