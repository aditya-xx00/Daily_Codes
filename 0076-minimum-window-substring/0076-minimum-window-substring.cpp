class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(auto &x:t){
           mp[x]++;
        }
        int count=mp.size();

        int start=0;
        int len=INT_MAX;
        int i=0,j=0;
        while(j<n){
            if(mp.find(s[j])!=mp.end())
              mp[s[j]]--;

            if( mp.find(s[j])!=mp.end() && mp[s[j]]==0)
                count--;

            if(count==0){
                while(count==0){
                   start=i;
                   len=min(len,j-i+1);
                   if(mp.find(s[i])!=mp.end())
                     mp[s[i]]++;
                   if( mp.find(s[i])!=mp.end() && mp[s[i]]==1)
                    count++;
                  i++; 
                }  
            }
           j++; 
        }
        return len==INT_MAX?"":s.substr(start,len);
    }
};