class Solution {
public:
    string nearestPalindromic(string n) {
        vector<long long int>cand;
        string tmp;
        long nn = mystoi(n);
        int end = (n.size() - 1) / 2, len = n.size();
        for(int i = 0; i <= end; ++i)
            tmp += n[i];
        if(n.size() & 1) end = (n.size() - 1) / 2 - 1;
        for(int i = end; i >= 0; --i)
            tmp += n[i];
        if(tmp != n) cand.push_back(mystoi(tmp));
        if(tmp.size() & 1) {
            int tlen = tmp.size();
            if(tmp[tlen / 2] < '9' ) {
                long long int res = 0;
                for(int i = 0; i < tlen / 2; ++i)
                    res = res * 10 + (tmp[i] - '0');
                res = res * 10 + (tmp[tlen / 2] - '0' + 1);
                for(int i = tlen / 2 + 1; i < tlen; ++i)
                    res = res * 10 + (tmp[i] - '0');
                cand.push_back(res);
            }
            if(tmp[tlen / 2] > '0') {
                long res = 0;
                for(int i = 0; i < tlen / 2; ++i)
                    res = res * 10 + (tmp[i] - '0');
                res = res * 10 + (tmp[tlen / 2] - '0' - 1);
                for(int i = tlen / 2 + 1; i < tlen; ++i)
                    res = res * 10 + (tmp[i] - '0');
                cand.push_back(res);
            }
        } else {
            int tlen = tmp.size();
            if(tmp[tlen / 2 - 1] < '9' ) {
                long res = 0;
                for(int i = 0; i < tlen / 2; ++i)
                    res = res * 10 + (tmp[i] - '0');
                res++;
                long tmp = res;
                while(tmp > 0) {
                    res = res * 10 + (tmp % 10);
                    tmp /= 10;
                }
                cand.push_back(res);
            }
            if(tmp[tlen / 2 - 1] > '0') {
                long res = 0;
                for(int i = 0; i < tlen / 2; ++i)
                    res = res * 10 + (tmp[i] - '0');
                res--;
                long tmp = res;
                while(tmp > 0) {
                    res = res * 10 + (tmp % 10);
                    tmp /= 10;
                }
                cand.push_back(res);
            }
        }
        
        tmp = "1";
        for(int i = 0; i < len - 1; ++i)
            tmp += "0";
        tmp += "1";
        cand.push_back(mystoi(tmp));
        
        tmp = "";
        for(int i = 0; i < len - 1; ++i)
            tmp += "9";
        if(tmp != "") cand.push_back(mystoi(tmp));
        
        long long int mn = 1e9;
        long long int ans;
        for(int i = 0; i < cand.size(); ++i)
            if(abs(nn - cand[i]) < mn) {
                mn = abs(nn - cand[i]);
                ans = cand[i];
            } else if(abs(nn - cand[i]) == mn) {
                ans = min(ans, cand[i]);
            }
        return to_string(ans);
    }
    
    long mystoi(string s) {
        long res = 0;
        for(int i = 0; i < s.size(); ++i) {
            res  = res * 10 + (s[i] - '0');
        }
        return res;
    }
    
};
