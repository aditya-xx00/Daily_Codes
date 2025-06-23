class Solution {
public:
   void Solve(int idx,int sum ,vector<int>temp,vector<vector<int>>& result,vector<int>&candidates , int target){
       if(sum==target){
        result.push_back(temp);
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
       Solve(idx,sum,temp,result,candidates,target);

   }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>temp;
        int sum=0;
        int idx=0;
        Solve(idx,sum,temp,result,candidates,target);
        return result;

    }
};