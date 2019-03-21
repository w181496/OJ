// Trie
class Solution {
public:
    
    struct Trie {
        bool end;
        vector<Trie*>next;
        Trie() {
            end = false;
            next = vector<Trie*>(26,NULL);
        }
    };
    
    bool wordBreak(string s, vector<string>& wordDict) {
        
        Trie *t = new Trie();
        
        // build trie
        for(int i = 0; i < wordDict.size(); ++i) {
            string now = wordDict[i];
            Trie* tmp = t; 
            for(int j = 0; j < now.size(); ++j) {
                if(tmp->next[now[j] - 'a'] == NULL) {
                    tmp->next[now[j] - 'a'] = (new Trie()); 
                    tmp = tmp->next[now[j] - 'a'];
                } else {
                    tmp = tmp->next[now[j] - 'a'];
                }
            }
            tmp->end = true;
        }
        
        vector<int>check(s.size() + 1, 0);
        check[0] = 1;
        Trie* now = t;
        for(int i = 0; i < s.size(); ++i) {
            if(check[i]) {
                Trie* tmp = t;
                for(int j = i; j < s.size(); ++j) {
                    int c = s[j] - 'a';
                    if(tmp->next[c] == NULL) break; 
                    check[j + 1] = check[j + 1] || tmp->next[c]->end;
                    tmp = tmp->next[c];
                }
            }
        }
        
        return check[s.size()];
    }  
};
