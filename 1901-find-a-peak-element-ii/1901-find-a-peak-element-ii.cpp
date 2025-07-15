class Solution {
public:
   int large(vector<int>arr){
    int ans=-1;
    int great=-1;
     for(int i=0;i<arr.size();i++){
        if(arr[i]>great){
           great=arr[i]; 
           ans=i;
        }   
     }
     return ans;
   }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int maxi=large(mat[mid]);
            int up=mid-1>=0?mat[mid-1][maxi]:-1;
            int down=mid+1<n?mat[mid+1][maxi]:-1;
            if(mat[mid][maxi]>up && mat[mid][maxi]>down)
              return {mid,maxi};
            else if(mat[mid][maxi]<down){
                start=mid+1;
            } 
            else
               end=mid-1; 
        }
        return {-1,-1};
    }
};