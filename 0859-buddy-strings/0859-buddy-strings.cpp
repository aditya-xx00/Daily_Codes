class Solution {
public:
     bool check(string s){
         unordered_map<char,int>mp;
         for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            if(mp[s[i]]>=2)
             return true;
         } 
         return false;
     } 
   
    bool buddyStrings(string s, string goal) {
        int n=s.length(),m=goal.length();
        if(m!=n)
        return false;
        
        if(goal==s){
            return check(s);
        }
        vector<int>arr;
        for(int i=0;i<n;i++){
            if(s[i]!=goal[i]){
               arr.push_back(i);
            }
        }
        if(arr.size()>2)
          return false;
        else{
            if(arr.size()>=2)
            swap(s[arr[0]],s[arr[1]]);
            if(s==goal)
             return true;
        }  
        return false; 
    }
};