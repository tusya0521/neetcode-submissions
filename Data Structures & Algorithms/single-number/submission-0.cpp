class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ini = nums[0];
        for(int i = 1 ; i<n ; i++){
            ini ^= nums[i];
        }

        return ini;
    }
};
