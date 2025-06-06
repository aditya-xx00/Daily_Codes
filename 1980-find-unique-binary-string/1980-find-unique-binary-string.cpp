class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            int temp=stoi(nums[i],0,2);
            st.insert(temp);
        }
           string str="";
        for(int i=0;i<(1<<n);i++){
            if(st.find(i)==st.end()){
               str=bitset<16>(i).to_string();
               str=str.substr(16-n,n);
            }
        }
        return str;
    }
};