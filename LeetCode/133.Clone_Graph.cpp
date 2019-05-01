
class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*>hash;
        Node* n = dfs(node, hash);
        return n;
    }
    
    Node* dfs(Node* n, unordered_map<Node*, Node*>& hash) {
        if(hash.count(n)) {
            return hash[n];
        }
        Node *tmp = new Node(n->val);
        hash[n] = tmp;
        for(int i = 0; i < n->neighbors.size(); ++i) {
            tmp->neighbors.push_back(dfs(n->neighbors[i], hash));
        }
        return tmp;
    }
    
};
