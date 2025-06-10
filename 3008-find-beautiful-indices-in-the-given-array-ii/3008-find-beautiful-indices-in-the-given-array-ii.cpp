class Solution {
public:

    void LPS(string& pat,vector<int>&lps){
     int m=pat.size();
      lps[0]=0;
     int i=1;
     int length=0;
     while(i<m){
         if(pat[length]==pat[i])
          {
              length++;
              lps[i]=length;
              i++;
          }
          else{
              if(length!=0){
                  length=lps[length-1];
              }else{
                  lps[i]=0;
                  i++;
              }
          }
     }
   }
    vector<int> KMP(string& pat, string& txt) {
       int n=txt.size();
       int m=pat.size();
       int i=0,j=0;
       vector<int>ans;
       vector<int>lps(m);
       LPS(pat,lps);
       while(i<n){
           if(txt[i]==pat[j]){
               i++,j++;
           }
           if(j==m){
               ans.push_back(i-j);
               j=lps[j-1];
           }
           else if(txt[i]!=pat[j]){
               if(j!=0){
                   j=lps[j-1];
               }else{
                   i++;
               }
           }
       }
        return ans;
    }

    vector<int> beautifulIndices(string s, string a, string b, int k) {
       
       vector<int>indices_i=KMP(a,s);
       vector<int>indices_j=KMP(b,s);
       int n=indices_i.size();
       int m=indices_j.size();
       vector<int>result;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(indices_j[j]-indices_i[i])<=k){
                result.push_back(indices_i[i]);
                break;
            }
        }
       }
      return result;
    }
};