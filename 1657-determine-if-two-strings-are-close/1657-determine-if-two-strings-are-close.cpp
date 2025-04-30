class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        if(n!=m)
          return false;
        vector<int>f1(26);
        vector<int>f2(26);

        for(int i=0;i<n;i++){
            char c1=word1[i];
            char c2=word2[i];
            int idx1=c1-'a';
            int idx2=c2-'a';
            f1[idx1]++;
            f2[idx2]++;
        }

        for(int i=0;i<26;i++){
            if(f1[i]!=0 && f2[i]!=0) continue;
            if(f1[i]==0 && f2[i]==0)  continue;
            return false;
        }

        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
        return f1==f2;
          
    }
};