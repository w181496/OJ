// 超水題
class Solution {
public:
    string toLowerCase(string str) {
        string ans;
        for(int i = 0; i < str.size(); ++i)
            if(str[i] >= 'A' && str[i] <= 'Z')
                ans += (char)(str[i] - 'A' + 'a');
            else
                ans += str[i];
        return ans;
    }
};
