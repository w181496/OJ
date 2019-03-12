class Solution {
public:
    string getHint(string secret, string guess) {
        int a = 0, b = 0;
        for(int i = 0; i < secret.size(); ++i) {
            if(secret[i] == guess[i]) {
                a++;
                secret[i] = guess[i] = ' ';
                continue;
            }
        }
        for(int i = 0; i < secret.size(); ++i) {
            if(secret[i] == ' ') continue;
            for(int j = 0 ; j < guess.size(); ++j) {
                if(i == j) continue;
                if(secret[i] == guess[j]) {
                    b++;
                    guess[j] = ' ';
                    break;
                }
            }
        }
        return itos(a) + "A" + itos(b) + "B";
    }
    
    string itos(int n) {
        string res = "";
        if(n == 0) return "0";
        while(n > 0) {
            res = (char)(n % 10 + '0') + res;
            n /= 10;
        }
        return res;
    }

};
