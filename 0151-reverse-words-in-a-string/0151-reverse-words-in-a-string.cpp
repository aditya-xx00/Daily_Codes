class Solution {
public:
    string reverseWords(string s) {
        string res;
        string ans;
        vector<string>words;
     stringstream ss(s) ;
      while(ss>>res)
       words.push_back(res);
        for(int i=words.size()-1;i>=0;i--){
            ans=ans+words[i];
            if(i!=0)
              ans+=' ';
        }
        return ans;
    }
};