//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int target) {
        int n=arr.size();
        int m=target;
        vector<vector<bool>>t(n+1,vector<bool>(m+1,0));
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
              if(i==0)
              t[i][j]=false;
              if(j==0)
              t[i][j]=true;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
              if(arr[i-1]<=j)
               t[i][j]= (t[i-1][j-arr[i-1]]) || t[i-1][j];
              else
               t[i][j]=t[i-1][j];
            }
        }
        return t[n][m];
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends