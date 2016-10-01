#include <iostream>
using namespace std;
int arr[505];
int main() {
    ios_base::sync_with_stdio(0);
    int n;
    arr[1] = 1;
    for(int i = 2; i <= 500; ++i)
        arr[i] = arr[i - 1] + i - 1;
    while(cin >> n)
        cout << arr[n] << endl;
    return 0;
}
