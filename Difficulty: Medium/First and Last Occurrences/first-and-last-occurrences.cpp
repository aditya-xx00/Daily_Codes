class Solution {
  public:
  
      int first(vector<int>& arr,int ele){
        int start=0,end=arr.size()-1;
        int idx=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]==ele){
                idx=mid;
                end=mid-1;
            }
            else if(arr[mid]>ele){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return idx;
      }
     int last(vector<int>& arr,int ele){
        int start=0,end=arr.size()-1;
        int idx=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]==ele){
                idx=mid;
                 start=mid+1;
            }
            else if(arr[mid]>ele){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return idx;
     }
    vector<int> find(vector<int>& arr, int target) {
        vector<int>ans;
        int s=first(arr,target);
        int l=last(arr,target);
        ans.push_back(s);
        ans.push_back(l);
        return ans;
    }
};