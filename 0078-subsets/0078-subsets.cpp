class Solution {
public:

    void subsets(vector<vector<int>>&ans, vector<int>& temp, vector<int>& nums,int i){
       if(i==nums.size()) {
        ans.push_back(temp);
        return;
       }
       subsets(ans,temp,nums,i+1);
        temp.push_back(nums[i]);
       subsets(ans,temp,nums,i+1);
       temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        subsets(ans,temp,nums,0);
        return ans;
    }
};