class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string ans = "", tmp;
        while(ss >> tmp)
            if(ans != "") ans = tmp + " " + ans;
            else ans = tmp;
        return ans;
    }
};
