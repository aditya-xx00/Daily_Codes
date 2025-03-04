//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

 vector<long long int> dp(10001, -1);
class Solution {
  public:
    long long int topDown(int n) {
      if(n==0||n==1) return  n;
      if(dp[n]!=-1) return dp[n]%1000000007;
      else return dp[n]=(topDown(n-1)%1000000007+topDown(n-2)%1000000007)%1000000007; 
    }
    
    long long int bottomUp(int n) {
        if(n==0)
        return 0;
       long long int first=0;
       long long int sec=1;
       for(int i=2;i<=n;i++){
           long long int temp=(first+sec)%1000000007;
           first=sec;
           sec=temp;
       }
       return sec%1000000007;  
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends