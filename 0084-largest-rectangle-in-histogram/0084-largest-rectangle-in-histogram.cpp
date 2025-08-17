class Solution {
public:
    vector<int> nse(vector<int> nums){
        int n=nums.size();
        vector<int>res(n);
        stack<int>st;
        
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && nums[i]<=nums[st.top()]){
               st.pop();
            }
            if(st.empty()) res[i]=n;
            else
            res[i]=st.top();
           st.push(i);
        }
        return res;
    }

     vector<int> pse(vector<int> nums){
        int n=nums.size();
        vector<int>res(n);
        stack<int>st;
        for(int i=0; i<n; i++){
         while(!st.empty() && nums[i]<=nums[st.top()]){
               st.pop();
            }
            if(st.empty()) res[i]=-1;
            else
            res[i]=st.top();
           st.push(i);
        }
        return res;
    }

    int largestRectangleArea(vector<int>& heights) {
        
        vector<int>v1=nse(heights), v2=pse(heights);
        int maxi=0;
        for(int i=0;i<heights.size();i++){
           int ans=heights[i]*(v1[i]-v2[i]-1);
           maxi=max(maxi,ans);
        }
        return maxi;
    }
};