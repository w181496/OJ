// 糞題..
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits != "") dfs(digits, ans, 0, "");
        return ans;
    }
    
    void dfs(string& digits, vector<string>&ans, int idx, string now) {
        if(idx >= digits.size()) {
            ans.push_back(now);
            return;
        }
        char c = digits[idx];
        if(c == '2') {
            dfs(digits, ans, idx + 1, now + "a");   
            dfs(digits, ans, idx + 1, now + "b");
            dfs(digits, ans, idx + 1, now + "c");
        } else if(c == '3') {
            dfs(digits, ans, idx + 1, now + "d");   
            dfs(digits, ans, idx + 1, now + "e");
            dfs(digits, ans, idx + 1, now + "f");
        } else if(c == '4') {
            dfs(digits, ans, idx + 1, now + "g");   
            dfs(digits, ans, idx + 1, now + "h");
            dfs(digits, ans, idx + 1, now + "i");
        } else if(c == '5') {
            dfs(digits, ans, idx + 1, now + "j");   
            dfs(digits, ans, idx + 1, now + "k");
            dfs(digits, ans, idx + 1, now + "l");
        } else if(c == '6') {
            dfs(digits, ans, idx + 1, now + "m");   
            dfs(digits, ans, idx + 1, now + "n");
            dfs(digits, ans, idx + 1, now + "o");
        } else if(c == '7') {
            dfs(digits, ans, idx + 1, now + "p");   
            dfs(digits, ans, idx + 1, now + "q");
            dfs(digits, ans, idx + 1, now + "r");
            dfs(digits, ans, idx + 1, now + "s");
        } else if(c == '8') {
            dfs(digits, ans, idx + 1, now + "t");   
            dfs(digits, ans, idx + 1, now + "u");
            dfs(digits, ans, idx + 1, now + "v");
        } else if(c == '9') {
            dfs(digits, ans, idx + 1, now + "w");   
            dfs(digits, ans, idx + 1, now + "x");
            dfs(digits, ans, idx + 1, now + "y");
            dfs(digits, ans, idx + 1, now + "z");
        }
    }
};
