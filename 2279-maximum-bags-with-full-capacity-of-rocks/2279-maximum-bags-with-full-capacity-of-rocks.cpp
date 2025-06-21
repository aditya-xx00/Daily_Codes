class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int>ans;
        for(int i=0;i<capacity.size();i++){
            ans.push_back(capacity[i]-rocks[i]);
        }
        sort(ans.begin(),ans.end());
        int count=0;
        for(int i=0;i<capacity.size();i++){
             int temp=ans[i];
             if(additionalRocks>=temp){
                 count++;
                 additionalRocks=additionalRocks-temp;
             }
        }
        return count;
    }
};