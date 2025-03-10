//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int palindromicPartition(string &s) {
        int n = s.length();
        if (n == 0) return 0;

        // Step 1: Build palindrome table
        vector<vector<bool>> isPal(n, vector<bool>(n, false));
        for (int i = 0; i < n; i++) {
            isPal[i][i] = true;
        }
        for (int i = 0; i < n-1; i++) {
            isPal[i][i+1] = (s[i] == s[i+1]);
        }
        for (int len = 3; len <= n; len++) {
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;
                isPal[i][j] = (s[i] == s[j]) && isPal[i+1][j-1];
            }
        }

        // Step 2: Compute minimum cuts with 1D DP
        vector<int> dp(n, INT_MAX);
        for (int i = 0; i < n; i++) {
            if (isPal[0][i]) {
                dp[i] = 0; // No cuts needed if s[0..i] is palindrome
            } else {
                for (int j = 0; j < i; j++) {
                    if (isPal[j+1][i]) {
                        dp[i] = min(dp[i], dp[j] + 1);
                    }
                }
            }
        }
        return dp[n-1];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;
        cout << ob.palindromicPartition(str) << "\n";
    }
    return 0;
}
// } Driver Code Ends