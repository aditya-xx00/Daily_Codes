class Solution {
public:
    string reverseVowels(string s) {
        vector<char>index;
        for(int i=0;i<s.length();i++){
             if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' ||s[i]=='O' || s[i]=='U')
              index.push_back(s[i]);
        }
        reverse(index.begin(),index.end());
        int j=0;
         for(int i=0;i<s.length();i++){
             if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' ||s[i]=='O' || s[i]=='U'){
             s[i]=index[j];
             j++;      
            }   
        }
        return s;
    }
};