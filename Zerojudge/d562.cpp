#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int n;
    int l, r, flag;
    int arr[200];
    while(cin >> n) {
        for(int i = 0; i < n; ++i)
            cin >> arr[i];
        l = 0; r = n - 1; flag = 1;
        for(int i = 0; i < n; ++i) {
            if(i % 2) {
                cout << arr[r];
                for(int j = r - 1; j >= l; --j)
                   cout << " " << arr[j];
                r--;
            } else {
                cout << arr[l];
                for(int j = l + 1; j <= r; ++j)
                  cout << " " << arr[j];
                l++;
            }
            cout << endl;
        }
    }
    return 0;
}
