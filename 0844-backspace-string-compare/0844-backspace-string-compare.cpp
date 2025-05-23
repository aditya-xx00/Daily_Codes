class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        int n=s.size();
        int m=t.size();
        
        int ss=0;
        int st=0;

        int i=m-1;
        int j=n-1;

        while(i>=0 || j>=0){
             
             while(i>=0){
                if(t[i]=='#'){
                    st++;
                    i--;
                }
                else if( st>0){
                    i--;
                    st--;
                }
                else{
                    break;
                }
              }

                 while(j>=0){
                if(s[j]=='#'){
                    ss++;
                    j--;
                }
                else if( ss>0){
                    j--;
                    ss--;
                }
                else{
                    break;
                }
              }
            char first=i<0?'$':t[i];
            char sec=j<0?'$':s[j];

            if(first!=sec)
             return false;

            i--;
            j--; 
        }
        return true;
    }
};