class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp1;
        for(auto x:t){
            mp1[x]++;
        }

        unordered_map<char,int>mp2;
        for(auto x:s){
            mp2[x]++;
        }

        int count=0;
        for(int i=0;i<s.size();i++){
            if(mp2[s[i]]>mp1[s[i]])
                count+=mp2[s[i]]-mp1[s[i]];
             mp2[s[i]]=0;   
        }

        return count;

    }
};