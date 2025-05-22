class Solution {
public:
    
    unordered_map<string,bool>mp;
    bool isConcatinated(string words,unordered_set<string>&st){
        int l=words.size();

        if(mp.find(words)!=mp.end()){
            return mp[words];
        }

        for(int i=0;i<l;i++){
            string prefix=words.substr(0,i+1);
            string suffix=words.substr(i+1);

            if(st.find(prefix)!=st.end() && st.find(suffix)!=st.end()  || st.find(prefix)!=st.end() && isConcatinated(suffix,st))
                  return mp[words]=true;
        }
        return mp[words]=false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        int n=words.size();
        vector<string>result;

         mp.clear();
        result.clear();
        unordered_set<string>st(words.begin(),words.end());
        
        for(int i=0;i<n;i++){
            if(isConcatinated(words[i],st)){
                result.push_back(words[i]);
            }
        }
        return result;
    }
};