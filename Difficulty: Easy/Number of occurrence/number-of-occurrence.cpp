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
    
    int countFreq(vector<int>& arr, int target) {
        
     int s=first(arr,target);
     int l=last(arr,target);
     
      if(l==-1 && s==-1)
         return 0;
       
       return l-s+1; 
    }
};
