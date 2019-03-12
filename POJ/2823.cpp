#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int arr[1000010], ans[1000010], ans2[1000010];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    bool flag = false;
    while(cin >> n >> k) {
        deque<int>dq, dq2;
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
            
            while(!dq.empty() && arr[dq.back()] < arr[i]) dq.pop_back();
            dq.push_back(i);
            while(dq.front() < i - k + 1) dq.pop_front();

            while(!dq2.empty() && arr[dq2.back()] > arr[i]) dq2.pop_back();
            dq2.push_back(i);
            while(dq2.front() < i - k + 1) dq2.pop_front();
            
            if(i >= k - 1) {
                ans[i - k + 1] = arr[dq2.front()];
                ans2[i - k + 1] = arr[dq.front()];
            }
        }
        for(int i = 0; i < n - k + 1; ++i) {
            if(i != 0) cout << " ";
            cout << ans[i];
        }
        cout << endl;
        for(int i = 0; i < n - k + 1; ++i) {
            if(i != 0) cout << " ";
            cout << ans2[i];
        }
        cout << endl;
    }
    return 0;
}
