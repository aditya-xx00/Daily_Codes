class Solution {
public:
    void Comb(vector<string> & ans, int l,int r, string &temp,int n){
        if(temp.size()==2*n) {
            ans.push_back(temp);
            return;
        } 
        if(r<n){
            temp.push_back('(');
             Comb(ans,l,r+1,temp,n);
             temp.pop_back();
        }
        if(l<r){
            temp.push_back(')');
             Comb(ans,l+1,r,temp,n);
             temp.pop_back();
        }     
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int len=2*n-1;
        int l=0,r=0;
        string temp="";
        Comb(ans,l,r,temp,n);
        return ans;
    }
};