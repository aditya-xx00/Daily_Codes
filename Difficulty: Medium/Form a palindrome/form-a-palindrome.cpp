//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int findMinInsertions(string &s) {
        int n=s.length();
        string str=s;
        reverse(str.begin(),str.end());
        vector<vector<int>>t(n+1,vector<int>(n+1,0));
        for(int i=0;i<n+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0||j==0)
                 t[i][j]=0;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==str[j-1])
                 t[i][j]=1+t[i-1][j-1];
                else
                 t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        return n-t[n][n];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.findMinInsertions(S) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends