#include <iostream>
using namespace std;
int arr[100010] = {};
int main()
{
  ios_base::sync_with_stdio(0);
  int n, x, mx = 0;
  cin >> n;
  for(int i = 0; i < n; ++i)
  {
    cin >> x;
    arr[x] = arr[x - 1] + 1;
    mx = max(mx, arr[x]);
  }
  cout << n - mx << endl;
  return 0;
}
