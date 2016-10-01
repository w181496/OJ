#include <iostream>
#include <algorithm>
using namespace std;

struct P
{
  int x, y;
};

bool cmp(P a, P b) {
    return !(a.x > b.x ? true : a.x == b.x && a.y > b.y);
}

int main() {
    ios_base::sync_with_stdio(0);
    int n;
    P p[1050];
    while(cin >> n) {
        for(int i = 0; i < n; ++i)
            cin >> p[i].x >> p[i].y;
        sort(p, p + n, cmp);
        for(int i = 0; i < n; ++i)
            cout << p[i].x << " " << p[i].y << endl;
    }
    return 0;
}
