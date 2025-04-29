class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int m=word1.size();
        int n=word2.size();
        string res1="",res2="";
        for(int i=0;i<m;i++){
            res1+=word1[i];
        }
         for(int i=0;i<n;i++){
            res2+=word2[i];
        }
        return res1==res2;
    }
};