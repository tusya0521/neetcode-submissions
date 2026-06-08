class Solution {
public:
    int climbStairs(int n) {
        int str[n+1];
        str[0] = 1;
        str[1] = 1;
        for(int i = 2; i<=n ; i++){
            str[i] = str[i-1] + str[i-2];
        }
        return str[n];
    }
};
