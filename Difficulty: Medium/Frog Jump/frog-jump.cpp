//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

    int minCost(vector<int>& nums) {
        int n=nums.size();
        vector<int>t(n,0);
         t[0]=0;
         t[1]=abs(nums[1]-nums[0]);
        for(int i=2;i<n;i++){
            t[i]=min(abs(nums[i]-nums[i-1])+t[i-1],abs(nums[i]-nums[i-2])+t[i-2]);
        }
        return t[n-1]; 
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends