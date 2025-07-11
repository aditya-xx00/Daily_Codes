class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target) return true;
            else if(nums[mid]==nums[start] && nums[end]==nums[mid])
            {
              start=start+1;
              end=end-1;
              //continue;
            }
            else if(nums[start]<=nums[mid]){
                if(nums[start]<=target && nums[mid]>=target){
                    end=mid-1;
                }
                else
                   start=mid+1;
            }
            else{
                if(nums[mid]<=target && target<=nums[end])
                   start=mid+1;
                else
                   end=mid-1;   
            }
        }
        return false;
    }
};