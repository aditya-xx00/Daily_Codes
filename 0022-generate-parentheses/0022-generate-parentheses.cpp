class Solution {
public:
    void parenthesis(int l,int zero,int one,vector<string>&ans,string temp,int n){
        if(zero==one && l==0){
            ans.push_back(temp);
            return;
        }
        if(one>n)
          return ;
        if(zero>one){
            return ;
        }
        parenthesis(l-1,zero+1,one,ans,temp+')',n);
        parenthesis(l-1,zero,one+1,ans,temp+'(',n);
    }
    vector<string> generateParenthesis(int n) {
         int l=2*n;
         int zero=0;
         int one=0;
         vector<string>ans;
         string temp;
          parenthesis(l,zero,one,ans,temp,n);
          return ans;
    }
};