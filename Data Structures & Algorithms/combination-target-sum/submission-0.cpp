class Solution {
public:
vector<vector<int>> res;
    vector<vector<int>> dfs(int i,vector<int>& curr,int total,int target, const vector<int> nums){
        if(total == target){
            res.push_back(curr);
            return res;
        }
        if(i >= nums.size() || total>target){
            return res;
        }
        curr.push_back(nums[i]);
        dfs(i, curr, total + nums[i], target, nums);
        curr.pop_back();
        dfs(i+1, curr, total, target, nums);
        return res;
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> curr;
        return dfs(0, curr, 0, target, nums);
    }
};
