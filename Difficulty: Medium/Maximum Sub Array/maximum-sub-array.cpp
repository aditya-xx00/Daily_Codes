//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        int n=arr.size();
        long long int sum=0;
        long long int maxi=0;
        map<long long,vector<int>>mp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
               sum+=arr[i];
               maxi=max(maxi,sum);
               ans.push_back(arr[i]);
            }
            else{
             mp[sum]=ans;
              sum=0;
              ans.clear();
            }
            mp[sum]=ans;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]<0)
             count++;
        }
        if(count==n)
        return vector<int>{-1};
        
        return mp[maxi];
    }
};


//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from the input string

        Solution obj;
        vector<int> result = obj.findSubarray(a);

        // Print the result in the required format
        if (result.empty()) {
            cout << "[]"; // Print empty brackets if no non-negative subarray is found
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << "\n~\n"; // Ensure a new line after each test case output
    }

    return 0;
}

// } Driver Code Ends