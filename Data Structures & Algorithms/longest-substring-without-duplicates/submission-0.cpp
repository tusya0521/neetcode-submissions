class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> chset;
        int l = 0;
        int res = 0;

        for(int r = 0; r<s.size(); r++){
            while(chset.find(s[r]) != chset.end()){
                chset.erase(s[l]);
                l++;
            }
            chset.insert(s[r]);
            res = max(res , r-l+1);
        }
        return res;
    }
};
