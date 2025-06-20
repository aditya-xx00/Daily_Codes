class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int i=0,j=0;
        int n=tasks.size();
        int count=0;
        sort(tasks.begin(),tasks.end());
        for(int i=0;i<n;){
            int x=tasks[i];
            j=i;
            while(i<tasks.size() && tasks[i]==x)
             {
                 i++;
             } 
             int len=i-j;
             if(len==1)
              return -1;
            if(len%3!=1){
                count+=(len+1)/3;
            }else{
                count+=(len+1)/3+1;
            }
        }
        return count;
    }
};