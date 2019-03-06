/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int> >ans;
        queue<Node*>q;
        if(root) q.push(root); 
        while(!q.empty()) {
            vector<Node*>tmp;
            vector<int>tmpans;
            while(!q.empty()) {
                Node *n = q.front();
                q.pop();
                for(int i = 0; i < n->children.size(); i++) {
                    tmp.push_back(n->children[i]);
                }
                tmpans.push_back(n->val);
            }
            for(int i = 0; i < tmp.size(); i++)
                q.push(tmp[i]);
            ans.push_back(tmpans);
        }
        return ans;
    }
};
