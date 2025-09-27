class Solution {
public:
    void Binary(vector<string>& ans, int n,string &temp){
        if(n==0) {
            ans.push_back(temp);
            return;
        }
        if(temp.empty() || temp.back()!='0') {
            temp.push_back('0');
            Binary(ans,n-1,temp);
            temp.pop_back();
        } 
        temp.push_back('1');
        Binary(ans,n-1,temp);
        temp.pop_back();
    
    }
    vector<string> validStrings(int n) {
        
        vector<string>ans;
        string temp="";
        Binary(ans,n, temp);
        return ans;
    }
};