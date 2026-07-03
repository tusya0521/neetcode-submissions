class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();

        if (m > n)
            return false;

        vector<int> target(26, 0);
        vector<int> window(26, 0);

        // Frequency of s1
        for (char c : s1)
            target[c - 'a']++;

        for (int i = 0; i < n; i++) {
            // Add current character
            window[s2[i] - 'a']++;

            // Remove character that is out of the window
            if (i >= m)
                window[s2[i - m] - 'a']--;

            // Compare frequencies
            if (window == target)
                return true;
        }

        return false;
    }
};