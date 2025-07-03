// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        
        int idx=0;
        int n=arr.size();
        int start=0,end=arr.size()-1;
        int ans=INT_MAX;
        while(start<=end){
           int mid=start+(end-start)/2;
           
           if(arr[start]<=arr[mid]){
               if(arr[start]<ans){
                   ans=min(ans,arr[start]);
                   idx=start;
               }
               start=mid+1;
           }else{
               if(arr[mid]<ans){
                   ans=min(ans,arr[mid]);
                   idx=mid;
               }
               end=mid-1;
           }
        }
        return idx;
    }
};
