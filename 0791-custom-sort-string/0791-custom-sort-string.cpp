class Solution {
public:
    string customSortString(string order, string s) {
        
        unordered_map<char,bool>mp;
        for(char & x:order){
            mp[x]=true;
        }
        unordered_map<char,int>mp1;
        for(char & x:s){
            mp1[x]++;
        }
        string ans;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                while(j<order.size() && mp1[order[j]]>0){
                  ans.push_back(order[j]);
                    mp1[order[j]]--;
                }
               // mp.erase(s[i]);
                j++;
            }
        }
        for(char &x: s){
            if(mp.find(x)==mp.end()){
                ans.push_back(x);
            }
        }
        return ans;
    }
};