// 二分搜
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, r = letters.size(), mid;
        while(l < r) {
            mid = (l + r) >> 1;
            if(mid > letters.size() - 1) break;
            if(target == letters[mid])
                break;   
            else if(target > letters[mid])
                l = mid + 1;
            else 
                r = mid;
        }
        mid = (l + r) >> 1;
        if(mid >= letters.size()) return letters[0];
        while(mid < letters.size() && letters[mid] == target)
            mid++;    
        if(mid >= letters.size()) return letters[0];
        return letters[mid];
    }
};
