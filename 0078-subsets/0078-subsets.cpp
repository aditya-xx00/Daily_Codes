class Solution {
public:
   void Power(int idx, vector<int>&nums,vector<vector<int>>&ans,vector<int>temp){
      if(nums.size()==idx){
         ans.push_back(temp);
         return;
      }
    
      Power(idx+1,nums,ans,temp);
       temp.push_back(nums[idx]);
      Power(idx+1,nums,ans,temp);
      return;
   }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int idx=0;
        Power(idx,nums,ans,temp);
        return ans;
    }
};