class Solution {
public:
    long long subArrayRanges(vector<int>& arr) {
        int n=arr.size();
        long long ans=0;
        for(int i=0;i<n;i++){
             int small=arr[i],large=arr[i];
            for(int j=i;j<n;j++){
                small=min(small,arr[j]);
                large=max(large,arr[j]);
                ans+=large-small;
            }
        }
        return ans;
    }
};