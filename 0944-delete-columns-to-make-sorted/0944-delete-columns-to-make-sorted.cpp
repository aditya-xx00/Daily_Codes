class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs[0].length();
        int m=strs.size();
        int count=0;
        for(int j=0;j<n;j++){
            for(int i=0;i<m-1;i++){
                if(strs[i][j]>strs[i+1][j]){
                     count++;
                     break;
                }
            }
        }
        return count;

    }
};