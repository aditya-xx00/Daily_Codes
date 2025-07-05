class Solution {
public:
    int bouqetsFormed(vector<int>& bloomDay,int mid,int k){
        int count=0;
        int total=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid)
              count++;
            else{
                int temp=count/k;
                total+=temp;
                count=0;
            }
        }
         total+=count/k;  
        return total;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int mini=INT_MAX, maxi=INT_MIN;
        int n=bloomDay.size();
        int ans=-1;
        for(int i=0;i<n;i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }

        int start=mini,end=maxi;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(bouqetsFormed(bloomDay,mid,k)>=m){
                ans=mid;
               end=mid-1; 
            }
            else{
                  start=mid+1;
            }
        }
      return ans;
    }
};