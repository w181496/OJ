class Trie {
public:
    /** Initialize your data structure here. */
    
    class Node {
        public:
        
        char c;
        bool end;
        Node* next[26];
        
        Node(char ch) {
            this->c = ch;   
            this->end = false;
            for(int i = 0; i < 26; ++i)
                this->next[i] = NULL;
        }
        
    };
    
    Node* root;
    
    Trie() {
        root = new Node('@');  
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Node* tmp = this->root;
        for(int i = 0; i < word.size(); ++i) {
            int idx = word[i] - 'a';
            if(!tmp->next[idx])
                tmp->next[idx] = new Node(word[i]);   
            tmp = tmp->next[idx];
        }
        tmp->end = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node *tmp = this->root;
        for(int i = 0; i < word.size(); ++i) {
            if(!tmp->next[word[i] - 'a']) return false;
            else tmp = tmp->next[word[i] - 'a'];
        }
        if(tmp->end)
            return true;
        else
            return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node *tmp = this->root;
        for(int i = 0; i < prefix.size(); ++i) {
            if(!tmp->next[prefix[i] - 'a']) return false;
            else tmp = tmp->next[prefix[i] - 'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
