class Solution {
public:
    string triangleType(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int big=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>big)
              big=nums[i];
            if(nums[i%n]!=nums[(i+1)%n])
              count++;  
        }
       for(int i=0;i<n;i++)
       { 
          if((nums[i%n]+nums[(i+1)%n])<=big)
         return "none";
        }
          if(count==0)
            return "equilateral";
          else if(count==2)
            return "isosceles";
          else if(count==3)
             return "scalene";
     
          return "none";       
    }
};