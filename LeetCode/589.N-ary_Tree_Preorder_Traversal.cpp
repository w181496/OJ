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
    vector<int> preorder(Node* root) {
        vector<int>ans;
        dfs(root, ans);
        return ans;
    }
    void dfs(Node* root, vector<int>&ans) {
        if(!root) return;
        ans.push_back(root->val);
        for(int i = 0; i < root->children.size(); ++i) 
            dfs(root->children[i], ans);
    }
};
