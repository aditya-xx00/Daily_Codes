class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int idx=0;
        while(i<n){
             int count=0;
            int curr=chars[i];
            while(i<n && chars[i]==curr){
                count++;
                i++;
            }
                chars[idx]=curr;
                idx++;
                string s="";
                if(count!=1)
                {
                   s=to_string(count);
                   for(char x: s){
                      chars[idx]=x;
                      idx++;
                   }
                }
                count=1;
        }
        // chars[idx]=curr;
        //     idx++;
        //     string s="";
        //     if(count!=1)
        //     {
        //      s=to_string(count);
        //      for(char x: s){
        //      chars[idx]=x;
        //         idx++;
        //      }
        //     }
        return idx;
    }
};