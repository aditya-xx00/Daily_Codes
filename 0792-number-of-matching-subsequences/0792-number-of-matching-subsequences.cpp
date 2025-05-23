class Solution {
public:
    unordered_map<string,bool>v;
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
        return v[s]=true;
    }

    int numMatchingSubseq(string s, vector<string>& words) {
        int n=words.size();
        int count=0;
        v.clear();
        for(int i=0;i<n;i++){
             if(v.find(words[i])!=v.end())
                count++;
             else if(isSubsequence(words[i],s))
               count+=1;
        }
        return count;
    }
};