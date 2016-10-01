#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int t, n;
    int arr[1000];
    cin >> t;
    while(t--) {
        cin >> n;
        int ans = 0;
        for(int i = 0; i < n; ++i)
            cin >> arr[i];
        sort(arr, arr + n);
        for(int i = 0; i < n; ++i) {
            for(int j = i + 1; j < n; ++j) {
                for(int k = j + 1; k < n; ++k) {
                    if(arr[i] * arr[i] + arr[j] * arr[j] == arr[k] * arr[k]) ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
