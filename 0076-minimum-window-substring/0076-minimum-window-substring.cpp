class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        unordered_map<char, int> mp;
        for (auto& x : t) mp[x]++;
        int required = t.size();

        int i = 0, j = 0;
        int minLen = INT_MAX;
        int start = 0;

        while (j < n) {
            if (mp.find(s[j]) != mp.end()){
               if (mp[s[j]] > 0) required--;
            mp[s[j]]--;
            }
            

            while (required == 0) {
                if (j - i + 1 < minLen) {
                    minLen = j - i + 1;
                    start = i;
                }
                if (mp.find(s[i]) != mp.end()){
                  mp[s[i]]++;
                if (mp[s[i]] > 0) required++;
                }
                i++;
            }

            j++;
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
