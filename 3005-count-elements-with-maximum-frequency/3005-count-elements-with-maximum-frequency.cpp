class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxi=0;
       for(auto & x:mp){
           maxi=max(maxi,x.second);
        }
        int count=0;
        for(auto & x:mp){
            if(x.second == maxi) count+=maxi;
        }
        return count;
    }
};