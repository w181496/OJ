#include <iostream>
using namespace std;
typedef long long LL;
const int MOD = 1000000007;
LL add(LL a, LL b) {return (a + b) % MOD;};
LL mul(LL a, LL b) {return a * b % MOD;};
struct Mat {
    LL x[2][2];
    Mat(LL a = 0, LL b = 0, LL c = 0, LL d = 0) {
        x[0][0] = a;
        x[0][1] = b;
        x[1][0] = c;
        x[1][1] = d;
    }
    Mat operator *(const Mat &A) const {
        Mat res(0, 0, 0, 0);

        for(int i = 0; i < 2; ++i)
        {
            for(int j = 0; j < 2; ++j)
            {
                for(int k = 0; k < 2; ++k)
                {
                    res.x[i][j] = add(res.x[i][j], mul(x[i][k], A.x[k][j]));
                }
            }
        }
        return res;
    }
};
int main()
{
    int t, x, y, n, b, ans;
    Mat mx(1, -1, 1, 0);
    while(cin >> x >> y >> n) 
    {
        Mat A(y, 0, x, 0);
        Mat res(1, 0, 0, 1);
        Mat tmp = mx;
        b = n - 1;
        while(b)
        {
            if(b & 1) res = res * tmp;
            tmp = tmp * tmp;
            b >>= 1;
        }
        res = res * A;
        //cout << res.x[0][0] << " " << res.x[0][1] << endl << res.x[1][0] << " " << res.x[1][1] << endl;
        ans = (res.x[1][0] + MOD) % MOD;
        cout << ans << endl;
    }
    return 0;
}

