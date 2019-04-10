/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*>que;
        if(!root) return root;
        que.push(root);
        root->next = NULL;
        while(!que.empty()) {
            vector<Node*>tmp;
            while(!que.empty()) {
                Node* now = que.front();
                que.pop();
                if(now->left) tmp.push_back(now->left);
                if(now->right) tmp.push_back(now->right);
            }
            for(int i = 0; i < tmp.size(); ++i) {
                if(i == tmp.size() - 1) tmp[i]->next = NULL;
                else tmp[i]->next = tmp[i + 1];
                que.push(tmp[i]);
            }
        }
        return root;
    }
};
