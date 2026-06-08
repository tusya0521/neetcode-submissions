class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // making of 3 hash tables
        // if same include in with the same key
        // return all the 3 hash tables that have the values
        //how to compare the strings to be added to the has tables
        // looping can help
        unordered_map<string, vector<string>> hashmap;
        vector<vector<string>> res;

        for (string s : strs) {
            int freqMap[26] = {0};
            for (char c : s) {
                int charIdx = (int)c - 97;
                
                freqMap[charIdx]++;
            }

            stringstream ss;

            for (int num : freqMap) {
                ss << num << ',';
            }

            string freqMapStr = ss.str();

            if (hashmap.find(freqMapStr) != hashmap.end()){
                hashmap[freqMapStr].push_back(s);
            } else {
                hashmap[freqMapStr] = vector<string>{s};
            }
        }

        for (auto& pair : hashmap) {
            res.push_back(pair.second);
        }   

        return res;
    }
};
