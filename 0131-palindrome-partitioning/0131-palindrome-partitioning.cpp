class Solution {
public:
   bool isPalindrome(int l,int r, string& s){
        while(l<r){
            if(s[l]!=s[r])
             return false;
            l++;
            r--; 
        }
        return true;
   }

   void Solve(int idx, vector<string> &temp, vector<vector<string>>&result,string s){
      if(idx>=s.size()){
        result.push_back(temp);
        return ;
      }

      for(int i=idx;i<s.size();i++){
         if(isPalindrome(idx,i,s)){
             temp.push_back(s.substr(idx,i-idx+1));
             Solve(i+1,temp,result,s);
             temp.pop_back();
         }
      }
   }
    vector<vector<string>> partition(string s) {
       vector<vector<string>>result;
       vector<string>temp;
       int idx=0;
       Solve(idx,temp,result,s);
       return result;
    }
};