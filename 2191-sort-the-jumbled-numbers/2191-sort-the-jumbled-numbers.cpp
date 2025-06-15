class Solution {
public:
    int mapped(int a,vector<int>& mapping){
        if (a == 0) return mapping[0];
        int place=1;
        int mapped=0;
        while(a>0){
            int r=a%10;
            mapped=mapped+mapping[r]*place;
            place=place*10;
            a=a/10;
        }
        return mapped;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>>vec;
        for(int i=0;i<nums.size();i++){
            int num=mapped(nums[i],mapping);
            vec.push_back({num,i});
        }
        vector<int>result;
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            int pos=vec[i].second;
            result.push_back(nums[pos]);
        }
       return result;
    }
};