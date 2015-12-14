#include <iostream>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  int m[5], x[5], w[5], hs, hu;
  double ans;
  x[0] = 500; x[1] = 1000; x[2] = 1500; x[3] = 2000; x[4] = 2500;
  for(int i = 0; i < 5; ++i)
    cin >> m[i];
  for(int i = 0; i < 5; ++i)
    cin >> w[i];
  cin >> hs >> hu;
  ans = 0.0;
  for(int i = 0; i < 5; ++i) {
    double a = (0.3 * x[i]), b = (x[i] * (1.0 - m[i] / 250.0) - 50 * w[i]);
    if(a > b) ans += a;
    else ans += b;
  }
  ans += (hs * 100 - hu * 50);
  cout << ans << endl;
  return 0;
}
