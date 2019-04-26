class Solution {
public:
    string numberToWords(int num) {
        string ans = "";
        if(num == 0) return "Zero";
        if(num >= 1000000000) {
            int tmp = num / 1000000000;
            if(tmp / 100 != 0) ans += (convert(tmp / 100) + " Hundred");
            if(tmp % 100 != 0) ans += convert(tmp % 100);
            ans += " Billion";
        }
        
        if((num % 1000000000) >= 1000000) {
            int tmp = (num % 1000000000) / 1000000;
            if(tmp / 100 != 0) ans += (convert(tmp / 100) + " Hundred");
            if(tmp % 100 != 0) ans += convert(tmp % 100);
                
            ans += " Million";
        }
        
        if((num % 1000000) >= 1000) {
            int tmp = (num % 1000000) / 1000;
            if(tmp / 100 != 0) ans += (convert(tmp / 100) + " Hundred");
            if(tmp % 100 != 0) ans += convert(tmp % 100);
                
            ans += " Thousand";
        }
        
        int tmp = num % 1000;
        if(tmp / 100 != 0) ans += (convert(tmp / 100) + " Hundred");
        if(tmp % 100 != 0) ans += convert(tmp % 100);
        
        string stripped = "";
        bool flag = false;
        for(int i = 0; i < ans.size(); ++i) {
            if(!flag && ans[i] == ' ') flag = true;
            else stripped += ans[i];
        }
        
        return stripped;
    }
    
    string convert(int n) {
        if(n > 9) {
            if(n == 10) return " Ten";
            if(n == 11) return " Eleven";
            if(n == 12) return " Twelve";
            if(n == 13) return " Thirteen";
            if(n == 14) return " Fourteen";
            if(n == 15) return " Fifteen";
            if(n == 16) return " Sixteen";
            if(n == 17) return " Seventeen";
            if(n == 18) return " Eighteen";
            if(n == 19) return " Nineteen";
            int tmp = n / 10;
            if(tmp == 0) return convert(tmp);
            if(tmp == 2) return " Twenty" + convert(n % 10);
            if(tmp == 3) return " Thirty" + convert(n % 10);
            if(tmp == 4) return " Forty" + convert(n % 10);
            if(tmp == 5) return " Fifty" + convert(n % 10);
            if(tmp == 6) return " Sixty" + convert(n % 10);
            if(tmp == 7) return " Seventy" + convert(n % 10);
            if(tmp == 8) return " Eighty" + convert(n % 10);
            if(tmp == 9) return " Ninety" + convert(n % 10);
        } else {
            if(n == 1) return " One";
            else if(n == 2) return " Two";
            else if(n == 3) return " Three";
            else if(n == 4) return " Four";
            else if(n == 5) return " Five";
            else if(n == 6) return " Six";
            else if(n == 7) return " Seven";
            else if(n == 8) return " Eight";
            else if(n == 9) return " Nine";
        }
        return "";
    }
    
};
