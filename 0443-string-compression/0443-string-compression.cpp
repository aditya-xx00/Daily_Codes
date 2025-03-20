class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int read=0,write=0;
        while(read<n){
            int current=chars[read];
            int count =0;
            while(read<n && current==chars[read]){
                read++;
                count++;
            }
            chars[write++]=current;
            if(count!=1){
                string str=to_string(count);
                for(char c:str)
                 chars[write++]=c;
            }
        }
        return write;
    }
};