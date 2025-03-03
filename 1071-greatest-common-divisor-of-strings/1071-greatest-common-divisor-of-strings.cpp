class Solution {
public:
    int gcd(int a,int b){
        if(a%b==0)
          return b;
        return gcd(a%b,a);  
    }
    string gcdOfStrings(string str1, string str2) {
        int a=str1.length();
        int b=str2.length();
        if(str1+str2!=str2+str1)
          return "";
         int ans= gcd(a,b);
         string res=str1.substr(0,ans);
         return res;
    }
};