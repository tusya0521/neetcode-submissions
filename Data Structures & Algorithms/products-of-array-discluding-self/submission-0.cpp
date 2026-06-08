class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        vector<int> prf(n);
        vector<int> suf(n);

        prf[0] = 1;
        suf[n - 1] = 1;
        for (int i = 1; i < n; i++) {
            prf[i] = nums[i - 1] * prf[i - 1];
        }
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = nums[i + 1] * suf[i + 1];
        }
        for (int i = 0; i < n; i++) {
            res[i] = prf[i] * suf[i];
        }
        return res;
    }
};
