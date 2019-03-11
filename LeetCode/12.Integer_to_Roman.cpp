class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        while(num > 0) {
            if(num >= 1000) {
                num -= 1000;
                ans += 'M';
            } else if(num >= 900) {
                num -= 900;
                ans += "CM";
            } else if(num >= 500) {
                num -= 500;
                ans += "D";
            } else if(num >= 400) {
                num -= 400;
                ans += "CD";
            } else if(num >= 100) {
                num -= 100;
                ans += 'C';
            } else if(num >= 90) {
                num -= 90;
                ans += "XC";
            } else if(num >= 50) {
                num -= 50;
                ans += "L";
            } else if(num >= 40) {
                num -= 40;
                ans += "XL";
            } else if(num >= 10) {
                num -= 10;
                ans += "X";
            } else if(num >= 9) {
                num -= 9;
                ans += "IX";
            } else if(num >= 5) {
                num -= 5;
                ans += "V";
            } else if(num >= 4) {
                num -= 4;
                ans += "IV";
            } else if(num >= 1) {
                num -= 1;
                ans += "I";
            }
        }
        return ans;
    }
};
