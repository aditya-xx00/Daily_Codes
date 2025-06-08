class Solution {
public:
    void dfs(int node,vector<vector<int>>list,vector<bool>&visit){
         visit[node]=1;
         for(auto it :list[node]){
            if(!visit[it]){
               dfs(it,list,visit);
            }
         }
    }

    int findCircleNum(vector<vector<int>>& mat) {
        int n=mat.size();
        vector<vector<int>> list(n);

        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            if(mat[i][j]==1 && i!=j){
                list[i].push_back(j);
                list[j].push_back(i);
            }
          }
        }

        vector<bool> visit(n,false);
        int count=0;
        for(int i=0;i<n;i++){
           if(visit[i]==0){
            count++;
            dfs(i,list,visit);
           }
        }
       return count;
    }
};