class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int lmax=0, rmax=0;
        int result=0;
        int i=0, j=n-1;
        while(i<j){

            if(height[i]<=height[j]){
                lmax=max(lmax,height[i]);
               // if(lmax>height[i])
                result+=(lmax-height[i]);
                i++;
            }else{
                rmax=max(rmax,height[j]);
                //if(rmax>height[j]){
                    result+=(rmax-height[j]);
                
                j--;
            }
        }
       return result;
    }
};