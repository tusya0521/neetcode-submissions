class Solution {
public:
    // int dfs(int i, vector<int> nums, vector<int> memo){
    //     if(i >= nums.size()) return 0;
    //     if(memo[i] != -1){ 
    //         return memo[i];
    //     } else {
    //         memo[i] =  max(nums[i] + dfs(i-2, nums,memo), dfs(i-1,nums,memo));
    //         return memo[i];
    //     }
    // }
    // int rob(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<int> memo(n, -1);
    //     if(n == 1) return nums[0];
    //     if(n == 2){
    //         return (nums[0] > nums[1]) ?  nums[0] :  nums[1];
    //     }
    //     return dfs(n-1, nums, memo);        
    // }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2){
            return (nums[0] > nums[1]) ?  nums[0] :  nums[1];
        }
        int maxsum = -1;
        for(int i = n-3 ; i>=0 ; i--){
            nums[i] = max(nums[i] + nums[i+2], nums[i+1]);
        }
        return nums[0];
    }
};
