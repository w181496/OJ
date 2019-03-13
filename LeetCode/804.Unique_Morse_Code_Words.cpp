class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string dict[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<string,int>m;
        for(int i = 0; i < words.size(); ++i) {
            string tmp;
            for(int j = 0; j < words[i].size(); ++j)
                tmp += dict[words[i][j] - 'a'];
            m[tmp]++;
        }
        return m.size();
    }
};
