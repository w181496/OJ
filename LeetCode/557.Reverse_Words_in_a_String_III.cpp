class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string tmp, ans = "";
        while(ss >> tmp) {
           if(ans == "") {
                for(int i = 0; i < tmp.size(); ++i)
                    ans += tmp[tmp.size() - i - 1];
           } else {
               ans += " ";
               for(int i = 0; i < tmp.size(); ++i)
                    ans += tmp[tmp.size() - i - 1];
           }
        }
        return ans;
    }
};
