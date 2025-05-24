class Solution {
public:
     int MOD=1e9 +7;
    int numberOfWays(string corridor) {
        
        int n=corridor.size();
        vector<int>v;
        for(int i=0;i<n;i++){
           if(corridor[i]=='S'){
              v.push_back(i);
           }
        }

        if(v.size()%2!=0 || v.size()==0){
             return 0;
        }

        long long result=1;
        int last=v[1];
        for(int i=2;i<v.size();i+=2){
             
             int length=v[i]-last;
              result=(result*length)%MOD;
              last=v[i+1];
        }
        return result;
    }
};