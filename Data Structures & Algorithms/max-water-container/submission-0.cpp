class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, res=0, area=0;
        int j = heights.size()-1;
        while(i < j){
            area = (j-i) * (min(heights[i], heights[j]));
            res = max(area, res);
            if(heights[i] > heights[j]){
                j--;
            } else {
                i++;
            }
        }
        return res;
    }
};
