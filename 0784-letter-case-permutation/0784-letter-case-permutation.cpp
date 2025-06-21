class Solution {
public:
    void Permute(string s,string temp,vector<string>&ans){
        if(s.size()==0){
            ans.push_back(temp);
            return;
        }
        string s1=temp;
        string s2=temp;
        if(isdigit(s[0]))
        {
          s1+=s[0];
          s.erase(0,1);
          Permute(s,s1,ans);
        }else{
           s1+=tolower(s[0]);
           s2+=toupper(s[0]);
           s.erase(0,1);
           Permute(s,s1,ans);
        Permute(s,s2,ans);
        }
        
    }

    vector<string> letterCasePermutation(string s) {
        
        vector<string>ans;
        string temp="";
        Permute(s,temp,ans);
         return ans;
    }
};