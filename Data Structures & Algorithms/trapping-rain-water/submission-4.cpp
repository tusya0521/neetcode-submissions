class Solution {
public:
    int trap(vector<int>& height) {
        int max = height[0];
        int n = height.size();
        stack<int> stk;
        int cap = 0;
        stk.push(height[0]);
        for(int i = 1 ; i<n ; i++){
            if(height[i] >= max){
                while(!stk.empty()){
                    cap += min(height[i], max) - stk.top();
                    stk.pop();
                }
                max = height[i];
                stk.push(height[i]);
            } else if(height[i] < max){
                stk.push(height[i]);
            }
        }
        int max2 = stk.top();
        stk.pop();
        if(!stk.empty()){
            while(!stk.empty()){
                if(stk.top() >= max2) {
                    max2 = stk.top();
                    stk.pop();
                } else {
                    cap += min(max2, max) - stk.top();
                    stk.pop();
                }
            }
        }
        return cap;

    }
};
