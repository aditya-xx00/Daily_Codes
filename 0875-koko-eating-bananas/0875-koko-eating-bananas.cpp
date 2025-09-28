class Solution {
public:
     
     long long time(vector<int>& piles, int mid){
        long long t=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]%mid!=0){
                t+=piles[i]/mid;
                t+=1;
            }else
              t+=piles[i]/mid;
        }
        return t;
     }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxi=INT_MIN;

        for(int i=0;i<n;i++){
           maxi=max(maxi,piles[i]);
        }
         int ans=maxi;
        int start=1, end=maxi;
        while(start<=end){
           int mid=start+(end-start)/2;
            if(time(piles,mid)<=h){
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