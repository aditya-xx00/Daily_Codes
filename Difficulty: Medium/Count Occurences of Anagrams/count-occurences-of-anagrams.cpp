// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        
       unordered_map<char,int>mp;
       for(auto x:pat){
           mp[x]++;
       }
       
       int count =mp.size();
       int i=0,j=0;
       int n=txt.size();
       int k=pat.size();
       int ans=0;
       
       while(j<n){
           
           mp[txt[j]]--;
           
           if(mp[txt[j]]==0)
            count --;
           
           if(j-i+1==k){
               if(count==0){
                  ans++; 
               }
             //  j++;
             //  mp[txt[j]]--;  // BAD! accessing txt[j] before window size is ready
               mp[txt[i]]++;
               if(mp[txt[i]]==1){
                   count++;
               }
               i++;
           } 
           j++;
       }
       return ans; 
    }
};