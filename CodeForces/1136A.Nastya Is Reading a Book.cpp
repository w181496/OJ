#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k, ans;
    int l[200], r[200];
    while(cin >> n) {
        for(int i = 0; i < n; ++i)
            cin >> l[i] >> r[i];
        cin >> k;
        ans = 0;
        for(int i = 0; i < n; ++i)
            if(r[i] >= k) ans++;
        
        cout << ans << endl;
    }
    return 0;
}
