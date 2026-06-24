class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp1(n+1, 0);
        dp1[0] = 0;
        dp1[1] = 0;

        for(int i = 2 ; i<n+1 ; i++){
            dp1[i] = min(cost[i-1]+dp1[i-1], cost[i-2] + dp1[i-2]);
        }
        return dp1[n];
    }
};
