class Solution {
public:
    void Letter(vector<string>& ans, string & temp, string s,int i){
        if(i==s.size()){
            ans.push_back(temp);
            return;
        }
        if(isalpha(s[i])){
             temp.push_back(tolower(s[i]));
             Letter(ans,temp,s,i+1);
             temp.pop_back();

              temp.push_back(toupper(s[i]));
             Letter(ans,temp,s,i+1);
             temp.pop_back();
        }else{
           temp.push_back(s[i]);
            Letter(ans,temp,s,i+1);
            temp.pop_back();
        }
       
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string temp="";
        Letter(ans,temp,s,0);
        return ans;
    }
};