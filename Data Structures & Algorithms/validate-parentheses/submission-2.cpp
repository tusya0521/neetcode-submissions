class Solution {
public:
    bool isValid(string s) {
       stack<char> stck;
       for(int i = 0; i < s.length() ; i++){
        if (s[i] == '(' || s[i] == '{' || s[i] == '['){
            stck.push(s[i]);
        } else {
            if(stck.empty()){
                return false;
            }
            char lastadd = stck.top();
            stck.pop();
            if(s[i] == ')' && lastadd != '('){
                    return false;
            } else if(s[i] == ']' && lastadd != '[' ) {
                    return false;
            } else if(s[i] == '}' && lastadd != '{') {
                    return false;
            } 
        }
       }
        return stck.empty();
    }
};
