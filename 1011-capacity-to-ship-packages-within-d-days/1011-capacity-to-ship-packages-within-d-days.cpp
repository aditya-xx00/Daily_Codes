class Solution {
public:
    bool IsAns(vector<int>&weights,int days,int mid){
        int n=weights.size();
        int res=0;
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++){
           ans+=weights[i];
           if(ans>mid)
            {
              res+=1;
              ans=weights[i];
            }
        }
        res=res+1;
        if(res<=days)
         return true;
        else
          return false;   
    }

    int shipWithinDays(vector<int>& weights, int days) {
    int n=weights.size();
       int maxi=INT_MIN;
       int sum=0;
       for(int i=0;i<n;i++){
          maxi=max(maxi,weights[i]);
          sum+=weights[i];
       }

       int start=maxi,end=sum;
       int ans=-1;
       while(start<=end){
         int mid=start+(end-start)/2;
         if(IsAns(weights,days,mid)==true){
            ans=mid;
            end=mid-1;
         }else{
           start=mid+1;
         }
             
       }
       return ans;
    }
};