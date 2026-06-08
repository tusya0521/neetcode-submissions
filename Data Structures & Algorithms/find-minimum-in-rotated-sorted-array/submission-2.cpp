class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1 ;
        int mid;
        while(l != r){
            mid = floor((l+r)/2);

            if (l == r - 1) {
                l = nums[r] < nums[l] ? r : l;
                break;
            }

            if(((nums[l] < nums[mid])) && (nums[r] < nums[l])){
                l = mid;
            } else {
                r = mid;
            }
        }
        return nums[l];
    }
};
