class Solution {
public:
   void Solve(int idx,int sum ,vector<int>&temp,vector<vector<int>>& result,vector<int>&candidates , int target){
       if(sum==target){
      //  sort(temp.begin(),temp.end());
        result.push_back(temp);
          return;
       }
       if( sum>target || idx >=candidates.size()){
         return ;
       }
      
       temp.push_back(candidates[idx]);
       Solve(idx+1,sum+candidates[idx],temp,result,candidates,target);
       temp.pop_back();
       
        while(idx+1 < candidates.size() && candidates[idx]==candidates[idx+1])
          idx=idx+1  ;
       Solve(idx+1,sum,temp,result,candidates,target);

   }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>temp;
         sort(candidates.begin(),candidates.end());
        int sum=0;
        int idx=0;
        Solve(idx,sum,temp,result,candidates,target);
        sort(result.begin(),result.end());
         return  result;    
    }
};