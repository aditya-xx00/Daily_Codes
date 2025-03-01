//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

    int Substr(string text1,string text2,int m,int n){
        vector<vector<int>>t(m+1,vector<int>(n+1,-1));
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0||j==0)
                t[i][j]=0;
            }
        }
        int maxlen=0;
         for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
            if(text1[i-1]==text2[j-1]){
              t[i][j]= 1+t[i-1][j-1];
              maxlen=max(maxlen,t[i][j]);
            }
            else
              t[i][j]=0;
            }
        }
      return maxlen;         
    }
  
    int longestCommonSubstr(string& s1, string& s2) {
         int m=s1.length();
        int n=s2.length();
        return Substr(s1,s2,m,n);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends