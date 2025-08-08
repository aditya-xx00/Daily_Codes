class Solution {
public:
    int trap(vector<int>& height) {
        
         int n= height.size();
        if (n == 0) return 0;
        vector<int>pre(n), suf(n);
       
        int maxi=height[n-1];
        for(int i=n-1;i>=0;i--){
           maxi=max(height[i],maxi);
           pre[i]=maxi;
        }
         int mini=height[0];
         for(int i=0;i<n;i++){
           mini=max(height[i],mini);
           suf[i]=mini;
        }

        int res=0;
        for(int i=0;i<n;i++){
            mini=min(pre[i],suf[i]);
            if(mini-height[i]>0){
                res+=mini-height[i];
            }
        }
        return res;
    }
};