#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int n;
    unsigned long long int arr[70], num[70];
    arr[0] = num[0] = 2;
    for(int i = 1; i <= 63; ++i)
    {
        num[i] = num[i - 1] * 2;
        arr[i] = arr[i - 1] + num[i];
        if(i >= 10) arr[i] -= num[i - 10];
    }
    while(cin >> n) cout << arr[n] << endl;
    return 0;
}
