class Solution {
public:
    double Power(int n, double x){
        if(n==0) return 1.0;

        double half=Power(n/2,x);
        if(n%2==0)  return half*half;
        else
          return x*half*half;
    }
    double myPow(double x, int n) {
        long long N=n;
        if(n<0){
            return 1.0/Power(-N,x);
        }
       return Power(N,x);
    }
};