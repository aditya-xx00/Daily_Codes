class Solution {
public:
   void Solve(int idx,int sum ,vector<int>&temp,set<vector<int>>& result,vector<int>&candidates , int target){
       if(sum==target){
        sort(temp.begin(),temp.end());
        result.insert(temp);
          return;
       }
       if( sum>target){
         return ;
       }
       if(idx>=candidates.size())
        return ;
         
       Solve(idx+1,sum,temp,result,candidates,target);
       temp.push_back(candidates[idx]);
       sum+=candidates[idx];
       Solve(idx+1,sum,temp,result,candidates,target);
       temp.pop_back();
   }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>>result;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        int sum=0;
        int idx=0;
        Solve(idx,sum,temp,result,candidates,target);
          vector<vector<int>>ans;
          for(auto x:result){
            ans.push_back(x);
          }
          return ans;
    }
};