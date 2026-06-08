class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2){
            return max(nums[1], nums[0]);
        }
        if(n == 3) return max(nums[0], max(nums[1], nums[2]));

        vector<int> arr1(nums.begin() + 1, nums.end());
        int a = arr1.size();
        arr1[a - 2] = max(arr1[a-1], arr1[a-2]);
        vector<int> arr2(nums.begin(), nums.end()-1);
        arr2[a- 2] = max(arr2[a-1], arr2[a-2]);

        for(int i = a-3; i>=0 ; i--){
            arr1[i] = max(arr1[i] + arr1[i+2], arr1[i+1]);
            arr2[i] = max(arr2[i] + arr2[i+2], arr2[i+1]);
        }

        return max(arr1[0], arr2[0]);
    }
};
