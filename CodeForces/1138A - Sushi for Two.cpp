#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int arr[100010];
    while(cin >> n) {
        for(int i = 0; i < n; ++i) 
            cin >> arr[i];
        if(arr[0] == 2) 
            for(int i = 0; i < n; ++i) {
                if(arr[i] == 1) arr[i] = 2;
                else arr[i] = 1;
            }
        int cnt1 = 1, cnt2 = 0, ans = 0, now = 1;
        for(int i = 1; i < n; ++i) {
            if(arr[i - 1] != arr[i]) {
                if(cnt2 != 0) {
                    cnt1 = cnt2;
                    cnt2 = 1;
                } else {
                    cnt2++;
                    now = arr[i];
                }
            } else {
                if(cnt2 != 0) cnt2++;
                else cnt1++;
            }
            ans = max(min(cnt1, cnt2), ans);
        }
        cout << ans * 2 << endl;
    }
    return 0;
}
