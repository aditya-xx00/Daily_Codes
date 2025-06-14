class Solution {
public:
    int minMaxDifference(int num) {
        char c,ch;
       string str=to_string(num);
       for(int i=0;i<str.size();i++){
          if(str[i]!='9'){
            c=str[i];
             break;
          }
       }
        for(int i=0;i<str.size();i++){
          if(str[i]!='0'){
            ch=str[i];
             break;
          }
       }
       string maxi=str,mini=str;
         for(int i=0;i<str.size();i++){
          if(maxi[i]==c){
            maxi[i]='9';
          }
       }
         for(int i=0;i<str.size();i++){
          if(mini[i]==ch){
            mini[i]='0';
          }
       }
       int num1=stoi(maxi);
       int num2=stoi(mini);
       return num1-num2;


    }
};