class Solution {
public:
    int jump(vector<int>& nums) {
        int l = 0;
        int r = nums[0];
        int rmax = 0;
        int nxtjum = 0;
        int n = nums.size();
        if(n == 1) return 0;
        int jumps = 0;
        while(r < n-1){
            rmax = 0;
            for(int i = l ; i <= r ; i++){
                if(rmax < i+nums[i]){
                    nxtjum = i;
                    rmax = i+nums[i];
                }
            }
            l = r+1;
            r = rmax;
            jumps++;
        }
        jumps++;
        return jumps;
    }
};
