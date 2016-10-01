#include <iostream>
using namespace std;
int p[44725];
int main() {
    ios_base::sync_with_stdio(0);
    p[0] = 2;
    int idx = 1;
    for(int i = 3; i < 44725; i += 2) {
        bool chk = true;
        for(int j = 3; j * j <= i; j += 2) {
            if(i % j == 0) {
                chk = false;
                break;
            }
        }
        if(chk) p[idx++] = i;
    }
    long long int n, ans;
    while(cin >> n) {
        ans = 0;
        for(int i = 0; p[i] <= n && i < idx; ++i) {
            while(n >= p[i] && n % p[i] == 0) {
                ans += p[i];
                n /= p[i];
            }
        }
        if(n > 1) ans += n;
        cout << ans << endl;
    }
    return 0;
}
