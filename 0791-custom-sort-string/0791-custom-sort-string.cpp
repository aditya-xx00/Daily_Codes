class Solution {
public:
    string customSortString(string order, string s) {
        
        unordered_map<char,int>mp;
        for(int i=0;i<order.size();i++){
            mp[order[i]]=i;
        }
        
        auto mycomparator=[&mp] (char & ch1,char &ch2){
            if(mp[ch1]<mp[ch2])
             return true;
            else
             return false; 
        } ;

        sort(s.begin(),s.end(),mycomparator);
        return s;
    }
};