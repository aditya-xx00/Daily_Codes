class Solution {
public:
    void Solve(int k, int n, int idx,int sum, vector<int>temp,vector<int>& comb, vector<vector<int>>&ans){
        if(k==0 && sum==n){
            ans.push_back(temp);
            return;
        }
        if(sum>n)
          return ;
        if(idx>=comb.size())
         return;
           Solve(k,n,idx+1,sum,temp,comb,ans);
            temp.push_back(comb[idx]);
          Solve(k-1,n,idx+1,sum+comb[idx],temp,comb,ans);
        //   temp.pop_back();
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        vector<int>comb={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        int idx=0;
        int sum=0;
        Solve(k,n,idx,sum,temp,comb,ans);
         return ans;
    }
};