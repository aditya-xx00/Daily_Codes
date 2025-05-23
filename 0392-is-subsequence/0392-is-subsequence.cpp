class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.size();
        int n=t.size();

        unordered_map<char,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[t[i]].push_back(i);
        }
        int prev=-1;
        for(int i=0;i<m;i++){
            if(mp.find(s[i])==mp.end())
              return false;
            auto it=upper_bound(mp[s[i]].begin(),mp[s[i]].end(),prev);
             
             if(it==mp[s[i]].end())
              return false;
            prev=*it;  
        }
        return true;

    }
};