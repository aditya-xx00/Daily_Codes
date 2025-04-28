class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int curr=chars[0];
        int count=1;
        int idx=0;
        for(int i=1;i<n;i++){
            if(chars[i]==curr){
                count++;
            }
            else{
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
                curr=chars[i];
                count=1;
            }
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
        return idx;
    }
};