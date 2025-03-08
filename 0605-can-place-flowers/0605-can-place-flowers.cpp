class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size=flowerbed.size();
        if(n<=0)
         return true;
         
        if(size==1 && flowerbed[0]==0)
          return true;
        if(size==1 && flowerbed[0]!=0)
         return false; 
          
         
        if(flowerbed[0]==0 && flowerbed[1]!=1){
           n--;
           flowerbed[0]=1;
        }
          
        for(int i=1;i<size-1;i++){
            if(flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]!=1){
                 n--; 
                flowerbed[i]=1;
            }        
        }

        if(flowerbed[size-1]==0 && flowerbed[size-2]!=1){
           n--;
           flowerbed[size-1]=1;
        }

        if(n<=0)
         return true;
        else
         return false;
    } 
};