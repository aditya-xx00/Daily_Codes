class Solution {
public:
    
    void separate(string & version,vector<int> &res){
        stringstream ss(version);
        string token="";
        while(getline(ss,token,'.')){
            res.push_back(stoi(token));
        }
    }
    int compareVersion(string version1, string version2) {
        
        vector<int>res1;
        vector<int>res2;
        separate(version1,res1);
        separate(version2,res2);
        
        int n = max(res1.size(), res2.size());
        for (int i = 0; i < n; i++) {
            int v1 = i < res1.size() ? res1[i] : 0;
            int v2 = i < res2.size() ? res2[i] : 0;
            if (v1 > v2) return 1;
            if (v1 < v2) return -1;
        }
        return 0;  
     }
};