// >0: +eps,  <0: -eps
#include <iostream>
#include <iomanip>
using namespace std;
const double EPS = 1e-5;
int main() {
    ios_base::sync_with_stdio(0);
    int n;
    while(cin >> n) {
        double a, b;
        for(int i = 0; i < n; ++i) {
            cin >> a >> b;
            double r = (b - a) * 100 / a;
            int flag = 0;
            if(r + EPS - 10.00 >= 0 || -7.00 - r - EPS >= 0) flag = 1;
            if(r >= 0)
                cout << fixed << setprecision(2) << r + EPS << "% ";
            else
                cout << fixed << setprecision(2) << r - EPS << "% ";
            if(flag == 1) cout << "dispose" << endl;
            else cout << "keep" << endl;
        }
    }
    return 0;
}
