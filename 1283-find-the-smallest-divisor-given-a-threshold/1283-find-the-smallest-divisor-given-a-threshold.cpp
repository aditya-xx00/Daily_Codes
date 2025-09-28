class Solution {
public:
    
    long long divisor(vector<int>& nums, int mid){
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]%mid==0)
               ans+=(nums[i]/mid);
             else
                ans+=(nums[i]/mid+1); 
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int start=1;
        int ans=-1;
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++){
           maxi=max(maxi,nums[i]);
        }

        int end=maxi;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(divisor(nums,mid)<=threshold){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};