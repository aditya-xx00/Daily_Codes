class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size();
        vector<int>last(26,0);
         for(int i=0;i<n;i++){
            last[s[i]-'a']=i;
         }

         string res="";
        vector<bool>taken(26,0);
        for(int i=0;i<n;i++){
            if(taken[s[i]-'a']==true){
                continue;
            }
            while(res.length()>0 && s[i]<res.back() && last[res.back()-'a']>i){
              taken[res.back()-'a']=false;
              res.pop_back();
           }

           res.push_back(s[i]);
           taken[s[i]-'a']=true;
        } 
        return res;
    }
};