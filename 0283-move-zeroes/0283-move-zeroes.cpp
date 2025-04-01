class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int count =0,j=0;
        for(int i=0;i<n;i++){
           if(nums[i]==0)
            count ++;
           else if(nums[i]!=0){
             nums[j]=nums[i];
             j++;
           } 
        }
         for(int i=j;i<n;i++)
          nums[i]=0;
    }
};