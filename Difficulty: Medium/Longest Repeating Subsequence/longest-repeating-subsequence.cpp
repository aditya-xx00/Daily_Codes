//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int LRS(string &s,string &str){
        int n=str.size();
        vector<vector<int>>t(n+1,vector<int>(n+1,0));
        for(int i=0;i<n+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 || j==0)
                 t[i][j]=0;
            }
        }
         for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==str[j-1] && i!=j)
                 t[i][j]=1+t[i-1][j-1];
                else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                } 
            }
        }
        return t[n][n];
    }
    int LongestRepeatingSubsequence(string &s) {
        string str=s;
        return LRS(s,str);
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string str;
        cin >> str;
        Solution obj;
        int ans = obj.LongestRepeatingSubsequence(str);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends