class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mp;
        int i=0,j=0;
        int n=fruits.size();
        int maxi=1;
        while(j<n){
            
            mp[fruits[j]]++;
            if(mp.size()<=2){
                maxi=max(maxi,j-i+1);
            }
            else if(mp.size()>2){
                while(i<n && mp.size()>2){
                   mp[fruits[i]]--;
                   if(mp[fruits[i]]==0)
                     mp.erase(fruits[i]);
                   i++;
                } 
            }
            j++;
        }
        return maxi;
    }
};