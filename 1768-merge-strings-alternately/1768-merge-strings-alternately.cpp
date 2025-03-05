class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1=word1.length();
        int l2=word2.length();
        string newstr="";
        int i=0,j=0;
        while(i<l1 && j<l2){
            newstr=newstr+word1[i];
            i++;
            newstr=newstr+word2[j];
            j++;
        }

        if(l1>l2){
            while(i<l1){
            newstr=newstr+word1[i];
            i++;
            }
        }
        else{
            while(j<l2){
            newstr=newstr+word2[j];
                j++;
            }
        }
      return newstr;      
        
    }
};