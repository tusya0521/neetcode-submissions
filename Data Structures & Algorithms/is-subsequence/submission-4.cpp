class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<char> a;
        int n = s.length();
        if(s == "") return true;
        for(int i = 0 ; i<n ; i++){
            a.push_back(s[i]);
        }
        int track = 0;
        int m = a.size();
        n = t.size();
        for(int i = 0 ; i<n ; i++){
            if(a[track] == t[i]) track++;
            if(track >= m)return true;
        }
        cout<<track<<" "<<m;
        if(track == m) return true;
        return false;
        
    }
};