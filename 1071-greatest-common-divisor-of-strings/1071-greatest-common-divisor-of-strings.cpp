class Solution {
public:
    int gcd(int a,int b){
        if(b==0)
        return a;
        return gcd(b,a%b);
    }

    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!=str2+str1)
          return "";
        int a=str1.length();
        int b=str2.length();
         int ans= gcd(a,b);
         string res=str1.substr(0,ans);
         return res;
    }
};