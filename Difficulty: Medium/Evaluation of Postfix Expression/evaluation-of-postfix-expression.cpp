//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int evaluate(vector<string>& arr) {
        int n=arr.size();
        stack<string>st;
        for(int i=0;i<n;i++){
            if(arr[i]!="+" && arr[i]!="-" && arr[i]!="*" && arr[i]!="/")
             st.push(arr[i]);
            else{
                int  sec=stoi(st.top());
                st.pop();
                int  first=stoi(st.top());
                st.pop();
                if(arr[i]=="+")
                 st.push(to_string(first+sec));
                else if(arr[i]=="-")
                 st.push(to_string(first-sec));
                else if(arr[i]=="*")
                  st.push(to_string(first*sec));
                else if(arr[i]=="/")
                   st.push(to_string(first/sec));
            } 
        }
        return stoi(st.top());
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
        vector<string> arr;
        while (ss >> str) {
            arr.push_back(str);
        }
        Solution ob;
        cout << ob.evaluate(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends