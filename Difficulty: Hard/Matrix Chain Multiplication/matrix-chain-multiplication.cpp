//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int MM(vector<int>arr,int i,int j,vector<vector<int>>&t){
       if(i>=j)
       return 0;
       if(t[i][j]!=-1)
          return t[i][j];
       int mn=INT_MAX;
       for(int k=i;k<=j-1;k++){
           int temp=MM(arr,i,k,t)+MM(arr,k+1,j,t)+arr[i-1]*arr[k]*arr[j];
           if(temp<mn)
           mn=temp;
       }
       return t[i][j]=mn;
    }
    int matrixMultiplication(vector<int> &arr) {
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
       return  MM(arr,1,n-1,dp);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.matrixMultiplication(a) << endl << "~\n";
    }

    return 0;
}

// } Driver Code Ends