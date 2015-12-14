#include <iostream>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  int n, k, ans;
  int arr[100010];
  cin >> n >> k;
  ans = 0;
  for(int i = 0; i < n; ++i)
    cin >> arr[i];
  for(int i = 0; i < min(2 * k - n, n); ++i)
    ans = max(ans, arr[n - i - 1]);
  for(int i = 0; i < 2 * (n - k); ++i)
    ans = max(ans, arr[i] + arr[2 * n - 2 * k - i - 1]);
  cout << ans << endl;
  return 0;
}
