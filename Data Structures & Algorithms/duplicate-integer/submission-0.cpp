class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> hashmap;
        for (int num : nums){
            if(hashmap.find(num) != hashmap.end()){
                return true;
            } else {
                hashmap[num] = true;
            }
            }
            return false;
        }
    };
