class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int>m;
        vector<string>c, c2;
        for(int i = 0; i < list1.size(); ++i)
            if(!m.count(list1[i])) m[list1[i]] = 1;
        for(int j = 0; j < list2.size(); ++j)
            if(m.count(list2[j])) c.push_back(list2[j]), m[list2[j]]++;
        for(int i = 0; i < list1.size(); ++i)
            if(m[list1[i]] > 1) c2.push_back(list1[i]);
        bool ok = false;
        vector<string>ans;
        for(int i = 0; i < c.size() && !ok; ++i) {
            for(int j = 0; j <= i; ++j) {
                for(int k = 0; k <= i; ++k) {
                    if(j + k > i) break;
                    if(c[j] == c2[k]) ans.push_back(c[j]);
                }
            }
            if(!ans.empty()) ok = true;
        }
        return ans;
    }
};
