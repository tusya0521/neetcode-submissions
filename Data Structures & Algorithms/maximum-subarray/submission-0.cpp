class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];
        if(n == 2){
            if(nums[0] > nums[1]) return nums[0];
            else return nums[1];
        }
        int maxx = nums[0];
        int curr = nums[0];
        for(int i = 1 ; i<n ; i++){
            if(nums[i] + curr < nums[i]){
                curr = nums[i];
            } else {
                curr = curr + nums[i];
            }
            maxx = max(curr, maxx);
        }

        return maxx;
    }
};
