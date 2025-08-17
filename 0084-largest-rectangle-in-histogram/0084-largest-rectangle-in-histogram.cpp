class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       stack<int>st;
       int n=heights.size();
       vector<int>NSR(n);
       vector<int>NSL(n);

       for(int i=0;i<n;i++){
        while(!st.empty() && heights[i]<heights[st.top()]){
            NSR[st.top()]=i;
            st.pop();
        }
        st.push(i);
       } 
       while(!st.empty()){
        NSR[st.top()]=n;
        st.pop();
       }

        for(int i=n-1;i>=0;i--){
        while(!st.empty() && heights[i]<heights[st.top()]){
            NSL[st.top()]=i;
            st.pop();
        }
        st.push(i);
       }

        while(!st.empty()){
        NSL[st.top()]=-1;
        st.pop();
       }

       int maxi=0;
       for(int i=0;i<n;i++){
        int area=heights[i]*(NSR[i]-NSL[i]-1);
         maxi=max(maxi,area);
       }
       return maxi;
    }
};