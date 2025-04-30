class Solution {
public:
    bool Capital(string word){
        int n=word.size();
        for(char ch:word){
            if(ch<'A' || ch>'Z')
               return false;
        }
        return true;
    }
    bool Small(string word){
        int n=word.size();
        for(char ch:word){
            if(ch<'a' || ch>'z')
               return false;
        }
        return true;
    }
    bool detectCapitalUse(string word) {
        if(Capital(word) || Small(word) || Small(word.substr(1)))
          return true;

        return false;  
    }
};