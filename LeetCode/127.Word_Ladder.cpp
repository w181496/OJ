// BFS Shortest Path
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        vector<vector<int>>mx(wordList.size());
        vector<int>start;
        int end = -1, cnt, ans = 1e9;
        
        // find who is start and end
        for(int i = 0; i < wordList.size(); ++i) {
            if(end == -1 && wordList[i] == endWord) end = i;
            cnt = 0;
            for(int j = 0; j < wordList[i].size(); ++j)
                if(cnt > 1) break;
                else if(wordList[i][j] != beginWord[j]) cnt++;
            if(cnt == 1)
                start.push_back(i);
        }
        if(end == -1) return 0;
        
        // build graph
        for(int i = 0; i < wordList.size(); ++i) {
            for(int j = i + 1; j < wordList.size(); ++j) {
                string s1 = wordList[i], s2 = wordList[j];
                cnt = 0;
                for(int k = 0; k < s1.size(); ++k)
                    if(cnt > 1) break;
                    else if(s1[k] != s2[k]) cnt++;  
                if(cnt == 1) {
                    mx[i].push_back(j);
                    mx[j].push_back(i);
                }
            }
        }
        
        // shortest path
        for(int i = 0; i < start.size(); ++i) {
            vector<int>check(wordList.size(), 0);
            queue<pair<int,int>>q;
            q.push(make_pair(start[i], 1));
            while(!q.empty()) {
                pair<int,int>tmp = q.front();
                q.pop();
                int now = tmp.first;
                check[now] = 1;
                if(now == end) {
                    ans = min(ans, tmp.second);
                    break;   
                }
                if(tmp.second > ans) break;
                for(int j = 0; j < mx[now].size(); ++j)
                    if(check[mx[now][j]] == 0)
                        q.push(make_pair(mx[now][j], tmp.second + 1));   
            }
        }
        return ans == 1e9 ? 0 : ans + 1;
        
    }
};
