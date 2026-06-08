class Solution {
public:
string s = "";
vector<int> part;
int c =0;
    string encode(vector<string>& strs) {
        for(const string& ch : strs){
            c = c + ch.length();
            cout<<c<<endl;
            part.push_back(c);
            s.append(ch);
        }
        return s;
    }

    vector<string> decode(string s) {
        int j = 0;
        vector<string> result;
        for(int i = 0 ; i<part.size(); i++){
            result.push_back(s.substr(j, part[i]-j));
            cout<<j<<"   "<<part[i]<<endl;
            j = part[i];
        }
        return result;
    }
};