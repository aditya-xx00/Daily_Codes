//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string decodedString(string &s) {
        int n=s.length();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]!=']')
            st.push(s[i]);
            else{
                string word="";
                while(st.top()!='['){
                    word.push_back(st.top());
                    st.pop();
                 }
                st.pop();
                reverse(word.begin(),word.end());
                string k;
                while(!st.empty() && isdigit(st.top())){
                  k.push_back(st.top());
                  st.pop();
                }
              reverse(k.begin(),k.end());
              int num=stoi(k);
              string ans="";
              for(int i=0;i<num;i++)
                 ans.append(word);
              for(char c: ans)
                  st.push(c);
            }
        }
        string res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.decodedString(s) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends