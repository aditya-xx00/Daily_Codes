class Solution {
public:

     int splits(vector<int>&arr,int mid){
        int count=0;
        int ans=0;
       for(int i=0;i<arr.size();i++){
           ans+=arr[i];
           if(ans>mid){
                count++;
                ans=arr[i];
            }
       }
       count++;
       return count;
   }

    int splitArray(vector<int>& arr, int k) {
         int n=arr.size();
          int maxi=INT_MIN;
          int sum=0;
          for(int i=0;i<n;i++){
              sum+=arr[i];
              maxi=max(maxi,arr[i]);
          }
          int start=maxi;
          int end=sum;
          int ans=-1;
          while(start<=end){
              int mid=start+(end-start)/2;
              if(splits(arr,mid)<=k){
                  ans=mid;
                  end=mid-1;
              }else{
                  start=mid+1;
              }
          }
        return ans;
    }
};