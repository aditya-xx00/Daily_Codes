class Solution {
public:
    void Combination(set<vector<int>>&ans, vector<int>&temp, int sum,vector<int>& candidates, int target,int i){
          if(target==sum){
             ans.insert(temp);
             return ;
          }
          if(sum>target || i>=candidates.size()) return ;
          
          Combination(ans,temp,sum,candidates,target,i+1);
          temp.push_back(candidates[i]);
          sum+=candidates[i];
          Combination(ans,temp,sum,candidates,target,i);
          Combination(ans,temp,sum,candidates,target,i+1);
          temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>>ans;
        vector<int>temp;
        
        Combination(ans,temp,0,candidates,target,0);
        return vector<vector<int>> (ans.begin(),ans.end());
    }
};