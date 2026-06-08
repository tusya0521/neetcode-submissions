class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashmap(nums.begin(), nums.end());
        if(hashmap.size() < nums.size()){
            return true;
        } else {
            return false;
        }
    }
};
