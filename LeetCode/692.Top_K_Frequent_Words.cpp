// Priority queue + self-defined compare function
class Solution {
public:
    
    struct cmp {
        bool operator() (pair<string,int>p1, pair<string,int>p2) {
            if(p1.second == p2.second) return p1.first < p2.first;
            return p1.second > p2.second;
        }
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int>hash;
        priority_queue<pair<string,int>, vector<pair<string,int>>, cmp>pri;
        for(int i = 0; i < words.size(); ++i) {
            hash[words[i]]++;
        }
        for(unordered_map<string,int>::iterator it = hash.begin(); it != hash.end(); ++it) {
            pair<string,int>tmp = make_pair(it->first, it->second);
            pri.push(tmp);
            if(pri.size() > k) pri.pop();
        }
        
        vector<string>ans(k);
        for(int i = k - 1; i >= 0; --i) {
            pair<string, int>tmp = pri.top();
            pri.pop();
            ans[i] = tmp.first;
        }
        return ans;
    }
};
