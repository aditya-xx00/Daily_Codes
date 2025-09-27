class Solution {
public:
     int MOD=1e9+7;
    int countGoodNumbers(long long n) {
        int o=n/2;
        int e;

        if(n%2==0){
           e=n/2;
        }else
             e=n/2+1;
        long long res=1;
        for(int i=0;i<e;i++){
            res=res*5 % MOD;
        } 
         for(int i=0;i<o;i++){
            res=res*4 % MOD;
        }
        return res;      
    }
};