class Solution {
public:
    bool isVowel(char &ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' ||ch=='I' || ch=='O' || ch=='U')
         return true;
        return false; 
    }
    string sortVowels(string s) {
        vector<char>v;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])) v.push_back(s[i]);
        }
        sort(v.begin(),v.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i]) && j<v.size()) {
            s[i]=v[j];
            j++;
            }
        }
        return s;
    }
};