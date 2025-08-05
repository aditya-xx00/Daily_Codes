class Solution {
public:
    vector<int> ngl(vector<int>nums){
        stack<int>st;
        int n=nums.size();
        vector<int>v(n);
        for(int i=n-1;i>=0;i--){
           if(st.empty()){
             v[i]=-1;
           }
           else if(nums[i]<st.top()){
             v[i]=st.top();
           }
           else{
              while(!st.empty() && nums[i]>st.top() ){
                 st.pop();
              }
              if(st.empty())
               v[i]=-1;
              else
                v[i]=st.top();  
           }
           st.push(nums[i]);        
        }
        return v;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>v;
        stack<int>st;
        int n=nums2.size();
        
        for(int i=n-1;i>=0;i--){
           if(st.empty()){
             v[nums2[i]]=-1;
           }
           else if(nums2[i]<st.top()){
             v[nums2[i]]=st.top();
           }
           else{
              while(!st.empty() && nums2[i]>st.top() ){
                 st.pop();
              }
              if(st.empty())
               v[nums2[i]]=-1;
              else
                v[nums2[i]]=st.top();  
           }
           st.push(nums2[i]);        
        }
         
         vector<int>res;
         for(int i=0;i<nums1.size();i++){
                res.push_back(v[nums1[i]]);
         }
         return res;
    }
};