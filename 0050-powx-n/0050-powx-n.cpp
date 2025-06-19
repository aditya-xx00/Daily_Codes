class Solution {
public:
    double myPow(double x, int n) {
       if(n==0)
       return 1;
      if (n == INT_MIN) {
            return 1.0 / (x * myPow(x, -(n + 1)));
        }
        if (n < 0) {
            x = 1 / x;
            n = -n;
        }
        
        double half = myPow(x, n / 2);
        if (n % 2 == 0)
            return half * half;
        else
            return half * half * x;
    }
};