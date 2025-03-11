class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int product=1;
        for(int i=0;i<n;i++)
          product=product*nums[i];
        int prod=1,count=0;
        for(int i=0;i<n;i++){
          if(nums[i]!=0)
          prod=prod*nums[i];
          else
           count++;
        }
        vector<int>answer;
         if(count>1){
            for(int i=0;i<n;i++)
             answer.push_back(0);
             return answer;
         }
             
        for(int i=0;i<n;i++){
            if(nums[i]==0)
             answer.push_back(prod);
            else
             answer.push_back(product*pow(nums[i],-1)); 
        }
        return answer;    
    }
};