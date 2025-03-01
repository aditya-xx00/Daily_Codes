//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    // LCS lagega bs doosree string nikaal lo pahalee string ko reverse krke
    int longestPalinSubseq(string &s2) {
        string s1="";
        for(int i=s2.length()-1;i>=0;i--){
            s1=s1+s2[i];
        }
         int m=s2.length();
        int n=s1.length();
        vector<vector<int>>t(m+1,vector<int>(n+1,0));
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 || j==0)
                 t[i][j]=0;
            }
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(s1[i-1]==s2[j-1])
                 t[i][j]=1+t[i-1][j-1];
                 else
                  t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        
         return t[m][n];
    }
};


//{ Driver Code Starts.

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends