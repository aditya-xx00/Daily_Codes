class Solution {
public:
    int stairs(int n,vector<int>&t){
       if(n<=2)
         return n;
        if(t[n]!=-1)
         return t[n];
        return t[n]=stairs(n-1,t)+stairs(n-2,t);
    }

    int climbStairs(int n) {
        vector<int>t(n+1,-1);
       return stairs(n,t);
    }
};