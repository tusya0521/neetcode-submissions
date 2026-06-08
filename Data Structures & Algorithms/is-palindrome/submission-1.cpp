class Solution {
public:
    bool isPalindrome(string s) {
       s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c) {
        return !std::isalnum(c);  // remove if NOT alphanumeric
    }), s.end());
    for(auto& c : s){
      c = tolower(c);
    }

    int l = 0;
    int r = s.length() - 1;
    while(l < r){
        if(s[l] != s[r]) {
            return false;
        }

        l++;
        r--;
    }

    return true;
    }
};
