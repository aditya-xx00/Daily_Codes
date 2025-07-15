class Solution {
public:
    int pos(vector<int>arr){
       int ans=arr.size();
       int start=0,end=ans-1;
       while(start<=end){
          int mid=start+(end-start)/2;
          if(arr[mid]==1){
            ans=mid;
            end=mid-1;
          }
          else{
            start=mid+1;
          }
       } 
       return ans;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int ans=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            sort(mat[i].begin(),mat[i].end());
           int temp=m-pos(mat[i]);
           if(maxi<temp){
             maxi=temp;
             ans=i;
           }
           if (maxi == m) break;
        }
        return {ans,maxi};
    }
};