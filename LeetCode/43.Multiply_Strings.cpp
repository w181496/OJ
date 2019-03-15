// 大數乘法
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        vector<int>res(num1.size() + num2.size() + 5, 0);
        string tmp = "", ans = "";
        bool flag = true;
        if(num1.size() < num2.size()) swap(num1, num2);
        for(int i = num2.size() - 1; i >= 0; --i) {
            for(int j = num1.size() - 1; j >= 0; --j) {
                int x = num2.size() - i - 1, y = num1.size() - j - 1;
                res[x + y] += cov(num2[i]) * cov(num1[j]);
                if(res[x + y] > 9) {
                    res[x + y + 1] += (res[x + y] / 10);
                    res[x + y] %= 10;
                }
            }
        }
        for(int i = 0; i < num1.size() + num2.size() + 1; ++i) 
            tmp = (char)(res[i] + '0') + tmp;
        for(int i = 0; i < tmp.size(); ++i)
            if(flag && tmp[i] == '0') {
                continue;  
            } else if(flag && tmp[i] != '0') {
                flag = false;
                ans += tmp[i];
            } else {
                ans += tmp[i];
            }
        return ans;
    }
    
    int cov(char c) {
        return (c - '0');
    }
};
