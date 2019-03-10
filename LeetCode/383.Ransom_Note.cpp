class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int p1 = 0, p2 = 0;
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        while(p1 != ransomNote.size()) {
            if(p2 >= magazine.size()) return false;
            if(ransomNote[p1] == magazine[p2]) {
                p1++;
                p2++;
            } else {
                p2++;
            }
        }
        return true;
    }
};
