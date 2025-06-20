class Solution {
public:
    void Binary(vector<string>&ans,string &temp,int n){
        if(n<=0){
            ans.push_back(temp);
            return ;
        }
        string temp1=temp+'1';
        if(temp.size()>=1 && temp.back()=='0'){

        }else{
           string temp0=temp+'0';
           Binary(ans,temp0,n-1);
        }
        Binary(ans,temp1,n-1);
    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        string temp="";
       Binary(ans,temp,n);
       return ans;
    }
};