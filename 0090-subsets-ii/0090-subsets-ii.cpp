class Solution {
public:
   void Solve(int idx,vector<int> &temp,set<vector<int>>&st,vector<int>&nums){
      if(idx==nums.size()){
        st.insert(temp);
         return ;
      }

      Solve(idx+1,temp,st,nums);
      temp.push_back(nums[idx]);
      Solve(idx+1,temp,st,nums);
        temp.pop_back();
   }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>st;
        vector<int>temp;
        int idx=0;
        sort(nums.begin(),nums.end());
        Solve(idx,temp,st,nums);
        return vector<vector<int>>(st.begin(),st.end());
    }
};