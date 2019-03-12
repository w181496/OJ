#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    while(cin >> n >> k) {
        cout << 3*n + min(k - 1, n - k) << endl;
    }
    return 0;
}
