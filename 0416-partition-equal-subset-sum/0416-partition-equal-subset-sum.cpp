class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
         sum+=nums[i];
        if(sum%2!=0)
         return false;
        else{
         int n=nums.size();
         int m=sum/2;
         vector<vector<bool>>t(n+1,vector<bool>(m+1,0));
         for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
              if(i==0)
              t[i][j]=false;
              if(j==0)
              t[i][j]=true;
            }
         }
         for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
              if(nums[i-1]<=j)
               t[i][j]= (t[i-1][j-nums[i-1]]) || t[i-1][j];
              else
               t[i][j]=t[i-1][j];
            }
         }
         return t[n][m];
       }  
    }
};