class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans;
        int i=0,j=0;
        int n=nums1.size(),m=nums2.size();
        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
              ans.push_back(nums2[j]);
              j++;
            }
        }
        while(i<n){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<m){
          ans.push_back(nums2[j]);
          j++;
        }
        int len=ans.size();
        if(len%2==0){
            return (ans[len/2]+ans[(len-1)/2])/2.0;
        }else{
            return ans[len/2];
        }
    }
};