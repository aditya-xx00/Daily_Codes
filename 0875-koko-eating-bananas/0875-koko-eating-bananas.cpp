class Solution {
public:
    int eat(vector<int>piles, int mid){
        int ans=0;
        for(int i=0;i<piles.size();i++){
            int k=piles[i]/mid;
            if(piles[i]%mid ==0)
              ans+=k;
            else
              ans+=(k+1);  
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi,piles[i]);
        }
        int end=maxi;
        int res=INT_MAX;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(eat(piles,mid)<=h){
               res=mid;
               end=mid-1;
            }
            else
              start=mid+1;
        }
        return res;
    }
};