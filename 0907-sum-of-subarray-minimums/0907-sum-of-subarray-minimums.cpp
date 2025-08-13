class Solution {
public:
vector<int> nse(vector<int>arr){
       long long MOD=1e9+7;
       int n=arr.size();
       stack<int> st;
       vector<int>v(n);
       for(int i=n-1; i>=0; i--){
          while(!st.empty() && arr[st.top()]>arr[i]){
             st.pop();
          }
          if(st.empty())
            v[i]=n;
          else
            v[i]=st.top();

         st.push(i);     
       }
      return v;
    }

    vector<int> pse(vector<int>arr){
       int n=arr.size();
       stack<int> st;
       vector<int>v(n);
       for(int i=0; i<n; i++){
          while(!st.empty() && arr[st.top()]>=arr[i]){
             st.pop();
          }
          if(st.empty())
            v[i]=-1;
          else
            v[i]=st.top(); 

         st.push(i);    
       }
      return v;
    }

    int sumSubarrayMins(vector<int>& arr) {
        long long MOD=1e9+7;
        int sum=0;
        int n=arr.size();
        vector<int>v1=nse(arr), v2=pse(arr);
        for(int i=0;i<n;i++){
            long long mul=(v1[i]-i)%MOD * (i-v2[i])%MOD;
            sum=(sum+mul*arr[i])% MOD;
        }
        return sum;
    }
};