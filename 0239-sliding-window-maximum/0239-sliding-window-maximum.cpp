class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int>ans;
        list<int>l;
        int i=0,j=0;
        int n=nums.size();
        while(j<n){
            while(!l.empty() && l.back()<nums[j])
               l.pop_back();

              l.push_back(nums[j]);

             if(j-i+1==k){
                 ans.push_back(l.front());
                 if(l.front()==nums[i]){
                     l.pop_front();
                 }
                 i++;
             }
             j++; 
        }
        return ans;
    }
};