class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        int ans=0;
        for(int i=1;i<n;i++){
            if(colors[i-1]==colors[i]){
               ans=min(ans+neededTime[i-1],ans+neededTime[i]);
               if(neededTime[i]<neededTime[i-1]){
                   neededTime[i]=neededTime[i-1];
               }else{
                   neededTime[i-1]=neededTime[i];
               }
            }
        }
        return ans;
    }
};