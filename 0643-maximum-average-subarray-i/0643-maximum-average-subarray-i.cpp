class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum =0;
        int n=nums.size();
        for(int i=0;i<k;i++){
           sum+=nums[i];
        }
         double avg=sum/k;
        for(int i=k;i<n;i++){
            double new_sum=sum-nums[i-k]+nums[k];
            if(avg<new_sum/k){
              avg=new_sum/k;
            }
        }
        return avg;
    }
};