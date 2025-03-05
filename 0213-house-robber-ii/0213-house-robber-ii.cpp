class Solution {
public:
    int rob(vector<int>& nums) {
       int n=nums.size();
       if(n==0) return 0;
       if(n==1) return nums[0];
       if(n==2) return max(nums[1],nums[0]);
       int rob1=chori(nums,0,n-2);
       int rob2=chori(nums,1,n-1);
       return max(rob1,rob2);
        
    }

    int chori(vector<int>&num,int start,int end){
        int n=end-start+1;
        vector<int>dp(n,0);
        if(n==1) return dp[0]=num[start];
        dp[0]=num[start];
        dp[1]=max(num[start],num[start+1]);
        
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-1],num[start+i]+dp[i-2]);
        }
      return dp[n-1];
    }
};