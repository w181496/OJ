#include <iostream>
#include <vector>
using namespace std;
int t, n, m, a, b;
int state[1050];
vector<int>e[1050];
bool dfs(int v) {
    bool flag = true;
    state[v] = 1;
    for(int i = 0; i < e[v].size() && flag; ++i) {
        if(state[e[v][i]] == 1) flag = false;
        else if(state[e[v][i]] == 0) {
            flag = flag && dfs(e[v][i]);
        }
    }
    state[v] = 2;
    return flag;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin >> t;
    while(t--) {
        bool flag = true;
        cin >> n >> m;
        for(int i = 0; i < n; ++i) e[i].clear();
        for(int i = 0; i < m; ++i) {
            cin >> a >> b;
            e[a - 1].push_back(b - 1);
        }
        for(int i = 0; i < n; ++i) state[i] = 0;
        for(int i = 0; i < n && flag; ++i)
            if(state[i] == 0) flag = flag && dfs(i);
        if(flag) cout << "W+W" << endl;
        else cout << "O______O" << endl;
    }
    return 0;
}
