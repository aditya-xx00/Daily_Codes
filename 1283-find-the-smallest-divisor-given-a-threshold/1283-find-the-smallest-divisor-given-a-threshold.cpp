class Solution {
public:
    bool IsAns(vector<int>& nums ,int threshold,int mid){
        int ans=0;
         for(int i=0;i<nums.size();i++){
            if(nums[i]%mid==0)
              ans+=nums[i]/mid;
            else
             ans+=(nums[i]/mid)+1;  
         }
         if(threshold>=ans)
          return true;
         else
          return false; 
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans=-1;
        int maxi=*max_element(nums.begin(),nums.end());

        int start=1,end=maxi;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(IsAns(nums,threshold,mid)==true)
            {
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            } 
        }
        return ans;
    }
};