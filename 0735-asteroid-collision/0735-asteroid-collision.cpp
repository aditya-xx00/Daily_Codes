class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        list<int>l;
        
        for(int i=0;i<n;i++){
          bool flag= false;
          while(!l.empty() && asteroids[i]<0 && abs(l.back()) <= abs(asteroids[i])){
            if( abs(l.back()) == abs(asteroids[i]))
                flag=true;
            l.pop_back();
          }
          
          if(!flag &&  asteroids[i]<0 && abs(l.back()) < abs(asteroids[i]))
            l.push_back(asteroids[i]);

          if(asteroids[i]>0) l.push_back(asteroids[i]);    
        }
        
        vector<int> res;
        for(int x:l)
          res.push_back(x);
        return res;
    }
};