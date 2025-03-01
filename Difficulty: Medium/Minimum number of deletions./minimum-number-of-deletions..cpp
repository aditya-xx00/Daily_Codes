//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    
cout << "~" << "\n";
}
return 0;
}
// } Driver Code Ends


int minDeletions(string str, int n) { 
   string str1="";
    for(int i=n-1;i>=0;i--){
        str1+=str[i];
    }
    vector<vector<int>>t(n+1,vector<int>(n+1,0));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
           if(i==0||j==0)
             t[i][j]=0;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if(str[i-1]==str1[j-1])
              t[i][j]=1+t[i-1][j-1];
            else
             t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
   } 
   return n-t[n][n];
}