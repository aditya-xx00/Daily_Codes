class Solution {
public: 
    unordered_map<int,string>mp;
    void Solve(int idx,string & temp, vector<string>&ans,string &digits){
        if(idx>=digits.length() && !temp.empty()){
          ans.push_back(temp);
          return;
        }
        char ch=digits[idx];
        string  str=mp[ch-'0'];
        for(int i=0;i<str.length();i++){
            temp.push_back(str[i]);
            Solve(idx+1,temp,ans,digits);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string temp="";
        mp={
            {2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},
            {6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}
        };
        int idx=0;
        Solve(idx,temp,ans,digits);
        return ans;
    }   
};