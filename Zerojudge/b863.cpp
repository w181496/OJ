#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int t, n, c;
    int arr[100010];
    cin >> t;
    while(t--) {
        c = 0;
        cin >> n;
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
            c = max(c, arr[i] + i);
        }
        cout << c << endl;
    }
    return 0;
}
