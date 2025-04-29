class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        int m=w1.size();
        int n=w2.size();
        int i=0,j=0,k=0,l=0;
         while(i<m && k<n){
            if(w1[i][j]!=w2[k][l]){
                return false;
            }
            j++;
            l++;
            if(j==w1[i].length()){
                j=0;
                i++;
            }
            if(l==w2[k].length()){
                l=0;
                k++;
            }
         }
         if(i==w1.size() && k==w2.size())
         return true;
         else
           return false;
    }
};