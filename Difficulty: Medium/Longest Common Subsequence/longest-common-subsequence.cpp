//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// function to find longest common subsequence

class Solution {
  public:
    int Subseq(string text1,string text2,int m,int n){
        vector<vector<int>>t(m+1,vector<int>(n+1,-1));
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0||j==0)
                t[i][j]=0;
            }
        }
         for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
            if(text1[i-1]==text2[j-1])
              t[i][j]= 1+t[i-1][j-1];
            else
              t[i][j]=max( t[i-1][j], t[i][j-1]);
            }
        }
      return t[m][n];         
    }
    
    int lcs(string& s1, string& s2) {
        int m=s1.length();
        int n=s2.length();
        return Subseq(s1,s2,m,n);
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2; // Take both the strings as input
        Solution ob;
        cout << ob.lcs(s1, s2) << endl; // Call the lcs function
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends