#include <iostream>
using namespace std;
#define MAX 9999
#define MIN -9999
int mx[600][600];
int w, n, s, e, area;
void dfs(int x, int y) {
    area++;
    mx[x][y] = 0;
    if(x > e) e = x;
    if(x < w) w = x;
    if(y > s) s = y;
    if(y < n) n = y;
    if(mx[x - 1][y]) dfs(x - 1, y);
    if(mx[x + 1][y]) dfs(x + 1, y);
    if(mx[x][y - 1]) dfs(x, y - 1);
    if(mx[x][y + 1]) dfs(x, y + 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    int a, b;
    while(cin >> a >> b) {
        for(int i = 0; i < b; ++i)
            for(int j = 0; j < a; ++j)
                cin >> mx[j][i];
        for(int i = 0; i < b; ++i) {
            for(int j = 0; j < a; ++j) {
                if(mx[j][i] == 1) {
                    w = n = MAX;
                    e = s = MIN;
                    area = 0;
                    dfs(j, i);
                    cout << w << " " << n << " " << e << " " << s << " " << area << endl;
                }
            }
        }
    }
    return 0;
}
