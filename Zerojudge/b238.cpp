#include <iostream>
using namespace std;
typedef long long ll;
ll a, b, c, d, m, n, t;
ll add(ll a, ll b) { return (a + b) % m; };
ll mul(ll a, ll b) { return a * b % m; };
struct Mat
{
    ll x[2][2];
    Mat(ll a = 0, ll b = 0, ll c = 0, ll d = 0)
    {
        x[0][0] = a;
        x[0][1] = b;
        x[1][0] = c;
        x[1][1] = d;
    }
    Mat operator*(const Mat &a) const
    {
        Mat tmp(0, 0, 0, 0);
        for(int i = 0; i < 2; ++i)
            for(int j = 0; j < 2; ++j)
                for(int k = 0; k < 2; ++k)
                    tmp.x[i][j] = add(tmp.x[i][j], mul(x[i][k], a.x[k][j]));
        return tmp;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> t;
    while(t--)
    {
         cin >> a >> b >> c >> d >> n >> m;
         Mat A(a, b, c, d);
         Mat res(1, 0, 1, 0);
         Mat ans(1, 0, 0, 1);
         Mat tmp = A;
         ll b = n;
         while(b)
         {
              if(b & 1) ans = ans * tmp;
              tmp = tmp * tmp;
              b >>= 1;
         }
         ans = ans * res;
         if((ans.x[0][0] + m) % m > (ans.x[1][0] + m) % m) cout << "Tsundere" << endl;
         else if((ans.x[0][0] + m) % m < (ans.x[1][0] + m) % m) cout << "Haraguroi" << endl;
         else cout << "Normal" << endl;
    }
    return 0;
}
