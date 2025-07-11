class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-2]<nums[n-1]) return n-1;
        
       // int ans=INT_MIN;
        int start=1,end=n-2;
        while(start<=end){
            int mid=start+(end-start)/2;
            if((nums[mid]>nums[mid-1]) && (nums[mid]>nums[mid+1]))
              return mid;
            else if(nums[mid-1]<nums[mid]){
               // ans=max(ans,nums[mid]);
                start=mid+1;
            }
            else if(nums[mid+1]<nums[mid]){
               // ans=max(nums[mid],ans);
                end=mid-1;
            } 
        }
        return -1;
    }
};