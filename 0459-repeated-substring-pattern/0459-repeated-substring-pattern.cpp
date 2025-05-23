class Solution {
public:
    bool repeatedSubstringPattern(string s) {

       int n=s.length();
       for(int l=n/2;l>0;l--){
         if(n%l==0){
           int times=n/l;
           string str="";
           string append=s.substr(0,l);
           while(times--){
              str+=append;
           } 
           if(str==s)
           return true;
         }
       }
      return false;
    }
};