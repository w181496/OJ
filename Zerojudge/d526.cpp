#include <iostream>
using namespace std;

struct Node {
    Node *left;
    Node *right;
    int val;
};

void insert(Node *a, Node *b) {
    if(a->val > b->val) {
        if(a->left == NULL)
          a->left = b;
        else
          insert(a->left, b);
    } else {
        if(a->right == NULL)
          a->right = b;
        else
          insert(a->right, b);
    }
}

void prefix(Node *a) {
    cout << a->val << " ";
    if(a->left != NULL)
      prefix(a->left);
    if(a->right != NULL)
      prefix(a->right);
}

int main() {
    ios_base::sync_with_stdio(0);
    int n, v;
    Node *root = new Node();
    while(cin >> n) {
        for(int i = 0; i < n; ++i) {
            cin >> v;
            if(i == 0) {
                root->left = root->right = NULL;
                root->val = v;
            } else {
                Node *nd = new Node();
                nd->left = nd->right = NULL;
                nd->val = v;
                insert(root, nd);
            }
        }
        prefix(root);
        cout << endl;
    }
    return 0;
}
