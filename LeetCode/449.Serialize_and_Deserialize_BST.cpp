/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string pre = getPreorder(root);
        string in = getInorder(root);
        return pre + "|" + in;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int idx;
        vector<int>pre;
        vector<int>in;
        bool flag = false;
        for(int i = 0; i < data.size(); ++i) {
            if(data[i] == '|') {
                flag = true;
            } else if(data[i] == ',') {
                continue;
            } else if(flag) {
                int sum = 0, idx = i;
                while(idx < data.size() && data[idx] >= '0' && data[idx] <= '9') {
                    sum = sum * 10 + (data[idx] - '0');
                    idx++;
                }
                in.push_back(sum);
                i = idx - 1;
            } else {
                int sum = 0, idx = i;
                while(idx < data.size() &&  data[idx] >= '0' && data[idx] <= '9') {
                    sum = sum * 10 + (data[idx] - '0');
                    idx++;
                }
                pre.push_back(sum);
                i = idx - 1;
            }
        }
        if(pre.empty()) return NULL;
        
        TreeNode* root = dfs(pre, in, 0, pre.size() - 1, 0, in.size() - 1);
        
        return root;
    }
    
    string getPreorder(TreeNode* root) {
        if(!root) return "";
        string res = to_string(root->val);
        string l = getPreorder(root->left);
        string r = getPreorder(root->right);
        if(l != "") res = res + "," + l;
        if(r != "") res = res + "," + r;
        return res;
    }
    
    string getInorder(TreeNode* root) {
        if(!root) return "";
        string res = to_string(root->val);
        string l = getInorder(root->left);
        string r = getInorder(root->right);
        if(l != "") res = l + "," + res;
        if(r != "") res = res + "," + r;
        return res;
    }
    
    TreeNode* dfs(vector<int>& pre, vector<int>& in, int l1, int r1, int l2, int r2) {
        if(l1 > r1 || l2 > r2 || l1 < 0 || r1 >= pre.size() || l2 < 0 || r2 >= in.size()) return NULL;
        int val = pre[l1];
        TreeNode* tmp = new TreeNode(val);
        int idx;
        for(int i = 0; i <= r2 - l2; ++i) {
            if(in[i + l2] == pre[l1]) {
                idx = i;
                break;
            }
        }
        tmp->left = dfs(pre, in, l1 + 1, l1 + idx, l2, idx + l2 - 1);
        tmp->right = dfs(pre, in, l1 + idx + 1, r1, idx + l2 + 1, r2);
        return tmp;
        
    }
    
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));
