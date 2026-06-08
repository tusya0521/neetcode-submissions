class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int lastg = arr[n-1];
        int temp = lastg;
        arr[n-1] = -1;
        for(int i = n-2 ; i>=0 ; i--){
            cout<<i<<"goinin";
            if(lastg <= arr[i]) {
                temp = arr[i];
                arr[i] = lastg;
                lastg = temp;
            } else arr[i] = lastg;
        }
        return arr;
    }
};