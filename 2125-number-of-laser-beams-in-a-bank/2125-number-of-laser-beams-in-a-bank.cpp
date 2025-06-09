class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        int n=bank.size();
        
        vector<int>ans;
        for(int i=0;i<n;i++){
            int count=0;
           for(auto x:bank[i]){
              if(x=='1')
               count++;
           }
           if(count!=0)
           ans.push_back(count);
        }
        
        if (ans.size() < 2) return 0;

        int res=0;
        for(int i=0;i<ans.size()-1;i++){
            res=res+ans[i]*ans[i+1];
        }
        return res;
    }
};