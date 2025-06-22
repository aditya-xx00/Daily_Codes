class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        int n=s.size();
        int x=n%k;
        if(x!=0){
            x=k-x;
        }
        while(x>0){
            s+=fill;
            x--;
        }
        for(int i=0;i<s.size();i+=k){
            ans.push_back(s.substr(i,k));
        }
        return ans;
    }
};