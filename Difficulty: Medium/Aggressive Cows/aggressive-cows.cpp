// User function Template for C++

class Solution {
  public:

    bool pos(vector<int>&stalls,int k,int mid){

        k--;
        int temp=stalls[0];
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-temp>=mid){
                temp=stalls[i];
                 k--;
            }
        }
         return k<=0?true:false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        
       sort(stalls.begin(),stalls.end());
       auto maxi=max_element(stalls.begin(),stalls.end());
       int end = stalls[stalls.size() - 1] - stalls[0];
       int start=1;
       int ans=-1;
    
       while(start<=end){
           int mid=start+(end-start)/2;
           if(pos(stalls,k,mid)==true){
               ans=mid;
               start=mid+1;
           }
           else
            end=mid-1;
       }
       return ans; 
    }
};