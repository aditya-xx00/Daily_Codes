class Solution {
public:
    vector<string> shortestSubstrings(vector<string>& arr) {

       unordered_map<string,int>mp;
         for (auto &x : arr) {
            unordered_set<string> seen;  // per-string substring set
            for (int i = 0; i < x.size(); i++) {
                for (int j = i; j < x.size(); j++) {
                    seen.insert(x.substr(i, j - i + 1));
                }
            }
            for (auto &sub : seen) {
                mp[sub]++;
            }
        }
        
        vector<string>result;
        
        // to sort customally
        auto customsort=[] (string &a,string&b){
            return a.size()==b.size()?a<b:a.size()<b.size();
        };
        for(auto & x:arr){
            vector<string>ans;
        for(int i=0;i<x.size();i++){
        for(int j=i;j<x.size();j++){
           if(mp[x.substr(i,j-i+1)]==1)
            ans.push_back(x.substr(i,j-i+1));
        }
       }
         if(ans.size()>0){
            sort(ans.begin(),ans.end(),customsort);
            result.push_back(ans[0]);
         }
         else
           result.push_back("");  
       } 
       return result;
    }
};