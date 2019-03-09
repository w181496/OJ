// O(n^2)
/*
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int ans = 0;
        for(int i = 0; i < J.size(); ++i)
            for(int j = 0; j < S.size(); ++j) 
                if(J[i] == S[j]) ans++;
        return ans;
    }
};
*/

// O(n)
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int ans = 0;
        unordered_set<char>hash(J.begin(), J.end());
        for(int i = 0; i < S.size(); ++i)
            if(hash.count(S[i])) ans++;
        return ans;
    }
};
