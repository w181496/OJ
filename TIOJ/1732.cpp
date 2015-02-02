#include <iostream>
#include <algorithm>
using namespace std;
int arr[100010];
int main()
{
    ios_base::sync_with_stdio(0);
    int n, base, ans;
    while(cin >> n)
    {
        ans = 0;
        for(int i = 0; i < n; ++i)
            cin >> arr[i];
        sort(arr, arr + n);
        if(n % 2) base = arr[n / 2];
        else base = (arr[n / 2 - 1] + arr[n / 2]) / 2;
        for(int i = 0; i < n; ++i)
            ans += abs(arr[i] - base);
        cout << ans << endl;
    }
    return 0;
}
