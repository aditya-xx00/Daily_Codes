class Solution {
public:
    void Combination(vector<vector<int>>&ans, vector<int>&temp, int sum,vector<int>& candidates, int target,int i){
          if(target==sum){
             ans.push_back(temp);
             return ;
          }
          if(sum>target || i>=candidates.size()) return ;
          
          temp.push_back(candidates[i]);
          sum+=candidates[i];
          Combination(ans,temp,sum,candidates,target,i+1);
          sum-=candidates[i];
          temp.pop_back();

          while(i<candidates.size()-1 && candidates[i]==candidates[i+1]){
               i=i+1;
          }
          Combination(ans,temp,sum,candidates,target,i+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        
        Combination(ans,temp,0,candidates,target,0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};