// 自訂排序
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string res = "";
        vector<string>str;
        for(int i = 0; i < nums.size(); ++i) 
            str.push_back(itos(nums[i]));
        sort(str.begin(), str.end(), cmp);
        for(auto s : str)
            res += s;   
        for(int i = 0; i < res.size(); ++i)
            if(res[i] != '0') return res;
        return "0";
    }
    
    string itos(int n) {
        string ans = "";
        if(n == 0) return "0";
        while(n > 0) {
            ans = (char)(n % 10 + '0') + ans;
            n /= 10;
        }
        return ans;
    }
    
    bool static cmp(string s1, string s2) {
        return s1 + s2 > s2 + s1;   
    }
};
