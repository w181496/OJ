// Diophantine Equation
// 3 * x + 5 * y = N
// ---------------------------
// 3 * 2 + 5 * (-1) = 1
// ---------------------------
// x = 2 * g + 5 * t , x >= 0
// y = -g - 3 * t , y >= 0
// g = N
// ---------------------------
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n, x, y, ans;
    while(cin >> n)
    {
        x = 2 * n;
        y = -1 * n;
        ans = 1e9;
        for(int t = -1;; t--)
        {
            if(x + 5 * t < 0) break;
            if(y + (-3) * t >= 0 && (x + 5 * t + y + (-3) * t < ans))
                ans = x + 5 * t + y + (-3) * t;
        }
        if(ans == 1e9) cout << "This is Kongming's Trap!!!" << endl;
        else cout << ans << endl;
    }
    return 0;
}
