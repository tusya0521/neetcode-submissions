class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int step = n-1;
        for(int i = n-2 ; i>=0 ; i--){
            if(i + nums[i] >= step){
                step = i;
            }
        }

        if(step == 0) return true;
        return false;
    }
};
