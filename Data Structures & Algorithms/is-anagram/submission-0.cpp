class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int freqs[26] = {0};
        int freqt[26]= {0};
        for(char ch : s){
            int idx = (int)ch - 97;

            freqs[idx]++;
        }
        for(char ch : t){
            int idx = (int)ch - 97;
            freqt[idx]++;
        }
        
        for(int num = 0; num < sizeof(freqs)/sizeof(freqs[0]) ; num++){
            
            if (freqs[num] != freqt[num]){
                return false;
            }
        }
        return true;

        }
};
