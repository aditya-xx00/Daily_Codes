class Solution {
public:
    const int MOD=1e9+7;

    long long power(long long base,long long exp){
        if(exp==0) return 1;
        long long half=power(base,exp/2);
        long long result=half*half%MOD;
        if(exp%2==1){
            return result=base*result%MOD;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
       if(n==1)
         return 5;
        long long ans= (power(5,(n+1)/2)*power(4,n/2))%MOD; 
        return int(ans); 
    }
};