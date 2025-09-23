class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int>v1,v2;
        string token="";
        stringstream ss1(version1);
        while(getline(ss1,token,'.')){
            v1.push_back(stoi(token));
        }

        stringstream ss2(version2);
        while(getline(ss2,token,'.')){
            v2.push_back(stoi(token));
        }

        int n=v1.size();
        int m=v2.size();
        int len=0;
        if(m>n) len=m;
        else  len=n;
        for(int i=0;i<len;i++){
           int a= i>=n?0 :v1[i];
           int b= i>=m?0:v2[i];
            if(a<b) return -1;
            if(a>b) return 1;
        }
        return 0;
    }
};