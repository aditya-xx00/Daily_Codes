// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        
        unordered_map<char,int>mp;
        int i=0,j=0;
        int n=s.size();
        int maxi=-1;
        while(j<n){
            mp[s[j]]++;
            
            if(mp.size()==k){
                maxi=max(maxi,j-i+1);
            }
            else if(mp.size()>k){
                while(mp.size()>k){
                    mp[s[i]]--;
                    
                    if(mp[s[i]]==0)
                      mp.erase(s[i]);
                      
                    i++;
                }
            }
          j++;  
        }
      return maxi;
    }
};