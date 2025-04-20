class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxi=0;
        int minprice=INT_MAX;
        for(int i=0;i<n;i++){
                minprice=min(prices[i],minprice);
                maxi=max(prices[i]-minprice,maxi);
        }
        return maxi;
    }
};