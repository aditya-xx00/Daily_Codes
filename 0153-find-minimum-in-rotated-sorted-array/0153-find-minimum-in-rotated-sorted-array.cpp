class Solution {
public:
    int findMin(vector<int>& arr) {
        int start=0,end=arr.size()-1;
        int ans=INT_MAX;
        int mini=arr[0];
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[start]<=arr[mid]){
                ans=arr[start];
                 start=mid+1;
            }else{
                ans=arr[mid];
                end=mid-1;
            }
           mini=min(ans,mini); 
        }
        return mini;
    }
};