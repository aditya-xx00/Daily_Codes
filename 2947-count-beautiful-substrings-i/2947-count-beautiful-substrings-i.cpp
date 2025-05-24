class Solution {
public:

    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        return false;
    }
    int beautifulSubstrings(string s, int k) {
        
        int n=s.size();
        for(int i=0;i<n;i++){
              int vowels=0;
              int conso=0;
             int count=0;
            for(int j=i;j<n;j++){

              if(isVowel(s[j]))
               vowels++;
               else
                conso++;

                if(vowels==conso && (vowels*conso)%k==0){
                     count++;
                } 

            }
        }
        return count;
    }
};